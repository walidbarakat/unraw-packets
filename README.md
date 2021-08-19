# unraw-packets
through my work on a private project i found my self in a situation where i need to manipulate literally a raw packets ( bytes from L2 ), it wasn't hard to implement it but i think it would be nice to make it an on-shelf library to be used any time and for many usage.

this library written in C to support as many low level use cases as possible, as initial i provided the library in two files as header and source file.

currently this library is supporting : <br> <br>
//Layer 2
- [ ] Ethernet

//layer 3
- [ ] IPv4
- [ ] IPv6
- [ ] ICMPv4
- [ ] ICMPv6

//layer 4:
- [ ] TCP
- [ ] UDP
