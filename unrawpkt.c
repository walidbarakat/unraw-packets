#include <linux/if_ether.h>

#include <linux/ip.h>
#include <linux/ipv6.h>

#include <linux/icmp.h>
#include <linux/icmpv6.h>

#include <linux/tcp.h>
#include <linux/udp.h>

#include <linux/in.h>

#include <unrawpkt.h>

void packet_recv(uint8_t* raw_pkt) {
    *pkt = *raw_pkt;
}

/*
 * layer 2
 */
void extract_eth_hdr(unsigned char *raw_pkt) {
    &eth = (struct ethhdr *)(buffer);
}
struct ethhdr get_eth_hdr() {
    return eth;
}

bool isIPHDR(struct ethhdr eth) {
    if(eth->h_proto == ETH_P_IP) return true;

    return false;
}

/*
 * layer 3
 */
void extract_ipv4_hdr(unsigned char *raw_pkt) {
    &ip = (struct iphdr*)( buffer + sizeof(struct ethhdr) );
    iph4drlen = ip->ihl*4;
}
struct iphdr get_ipv4_hdr() {
    return ip;
}

void extract_ipv6_hdr(unsigned char *raw_pkt) {
    &ip6 = (struct ipv6hdr*)( buffer + sizeof(struct ethhdr) );
}
struct ipv6hdr get_ipv6_hdr() {
    return ip6;
}

void extract_icmpv4_hdr(unsigned char *raw_pkt) {
    &icmphdr = (struct icmphdr*)( buffer + sizeof(struct ethhdr) );
}
struct icmphdr get_icmpv4_hdr() {
    return icmp;
}

void extract_icmpv6_hdr(unsigned char *raw_pkt) {
    &icmpv6hdr = (struct icmpv6hdr*)( buffer + sizeof(struct ethhdr) );
}
struct icmpv6hdr get_icmpv6_hdr() {
    return icmp6;
}

/*
 * layer 4
 */
void extract_tcp_hdr(unsigned char *raw_pkt) {
    &tcp = (struct tcphdr*)( buffer + iph4drlen + sizeof(struct ethhdr));
}
struct tcphdr get_tcp_hdr() {
    return tcp;
}

void extract_udp_hdr(unsigned char *raw_pkt) {
     &udp = (struct udphdr*)( buffer + iph4drlen + sizeof(struct ethhdr));
}
struct udphdr get_udp_hdr() {
    return udp
}