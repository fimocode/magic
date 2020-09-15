#ifndef ACTION_TAKER_H
#define ACTION_TAKER_H

#include <vector>
#include "RuleHeader.h"
#include <iostream>
#include "Parser.h"
#include "Matcher.h"

void takeAction(pcpp::Packet parsedPacket, std::vector<RuleHeader> &rules);

#endif