#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::getline;



int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cout << "input error! Usage: ./bitcoin_exchange <filename>" << endl;
        return (1);
    }

    BitcoinExchange exchange;
    exchange.printResult(argv[1]);
    // cout << argv[1] << endl;

    // cout << exchange.db.find("2010-12-17")->second << endl;

    // ifstream queryFile(argv[1]);
    // string line;
    // while (getline(queryFile, line))
    // {
    //     cout << line << endl;
    // }
}
