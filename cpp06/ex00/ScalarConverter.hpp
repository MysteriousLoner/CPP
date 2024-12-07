#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <climits>
#include <limits>
#include <cctype>
#include "Omnivar.hpp"

using std::string;
using std::cout;
using std::endl;

class ScalarConverter {
public:
    static Omnivar converter(string param);
private:
    static Type getType(string param);
    static int stoi98(const string& param);
    static double stod98(const string& param);
    static float stof98(const string& param);
};

#endif