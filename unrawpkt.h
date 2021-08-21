#include <linux/if_ether.h>
#include <linux/ip.h>
#include <linux/ipv6.h>
#include <linux/icmp.h>
#include <linux/icmpv6.h>
#include <linux/tcp.h>
#include <linux/udp.h>

#include <linux/in.h>

unsigned char *pkt;

void packet_recv(unsigned char buffer[65536]);

/*
 * layer 2
 */
struct ethhdr extract_eth_hdr(unsigned char *raw_pkt);

/*
 * layer 3
 */
struct iphdr extract_ipv4_hdr(unsigned char *raw_pkt);

struct ipv6hdr extract_ipv6_hdr(unsigned char *raw_pkt);

struct icmphdr extract_icmpv4_hdr(unsigned char *raw_pkt);

struct icmpv6hdr extract_icmpv6_hdr(unsigned char *raw_pkt);

/*
 * layer 4
 */
struct tcphdr extract_tcp_hdr(unsigned char *raw_pkt);

struct udphdr extract_udp_hdr(unsigned char *raw_pkt);
