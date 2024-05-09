#pragma once

#include <map>
#include <string>

using std::string;

class BitcoinExchange
{
    std::map<string, double> db;
    std::map<string, double> query;
};