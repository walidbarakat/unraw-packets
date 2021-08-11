#include <linux/if_ether.h>
#include <linux/ip.h>
#include <linux/in.h>
#include <linux/tcp.h>
#include <linux/udp.h>

unsigned char *pkt;

void packet_recv(unsigned char buffer[65536]);

/*
 * layer 2
 */
void extract_eth_hdr(unsigned char *raw_pkt);

/*
 * layer 3
 */
void extract_ipv4_hdr(unsigned char *raw_pkt);

void extract_ipv6_hdr(unsigned char *raw_pkt);

void extract_icmpv4_hdr(unsigned char *raw_pkt);

void extract_icmpv6_hdr(unsigned char *raw_pkt);

/*
 * layer 4
 */
void extract_tcp_hdr(unsigned char *raw_pkt);

void extract_udp_hdr(unsigned char *raw_pkt);
