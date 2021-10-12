#include <linux/if_ether.h>

#include <linux/ip.h>
#include <linux/ipv6.h>

#include <linux/icmp.h>
#include <linux/icmpv6.h>

#include <linux/tcp.h>
#include <linux/udp.h>

#include <linux/in.h>

uint8_t* pkt;
struct ethhdr eth;

struct iphdr ip;
unsigned short iph4drlen;

struct ipv6hdr ip6;

struct icmphdr icmp;
struct icmpv6hdr icmp6;

struct tcphdr tcp;
struct udphdr udp;

void packet_recv(uint8_t* raw_pkt);

/*
 * layer 2
 */
void extract_eth_hdr(uint8_t* raw_pkt);
struct ethhdr get_eth_hdr();

bool isIPHDR(struct ethhdr eth);

/*
 * layer 3
 */
void extract_ipv4_hdr(uint8_t* raw_pkt);
struct iphdr get_ipv4_hdr();

void extract_ipv6_hdr(uint8_t* raw_pkt);
struct ipv6hdr get_ipv6_hdr();

void extract_icmpv4_hdr(uint8_t* raw_pkt);
struct icmphdr get_icmpv4_hdr();

void extract_icmpv6_hdr(uint8_t* raw_pkt);
struct icmpv6hdr get_icmpv6_hdr();

/*
 * layer 4
 */
void extract_tcp_hdr(unsigned char *raw_pkt);
struct tcphdr get_tcp_hdr();

void extract_udp_hdr(unsigned char *raw_pkt);
struct udphdr get_udp_hdr();