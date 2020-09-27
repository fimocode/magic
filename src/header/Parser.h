#ifndef PARSER_H
#define PARSER_H

#include "Packet.h"
#include "EthLayer.h"
#include "IPv4Layer.h"
#include "TcpLayer.h"
#include "UdpLayer.h"
#include "IcmpLayer.h"
#include "HttpLayer.h"
#include "SSLLayer.h"
#include "PayloadLayer.h"
#include <arpa/inet.h>
#include <iostream>

void parseEthLayer(pcpp::Packet parsedPacket, std::string *srcMac, std::string *dstMac);
void parseIpv4Layer(pcpp::Packet parsedPacket, std::string *srcIP, std::string *dstIP);
void printIcmpLayer(pcpp::Packet parsedPacket);
void parseTcpLayer(pcpp::Packet parsedPacket, int *srcPort, int *dstPort);
void parseUdpLayer(pcpp::Packet parsedPacket, int *srcPort, int *dstPort);

#endif