#include "ScalarConverter.hpp"

Omnivar ScalarConverter::converter(string param)
{
    Omnivar omnivar;

    Type type = getType(param);
    switch (type) {
        case POSITIVE_INF:
        {
            omnivar.t_char = 0;
            omnivar.t_double = +INFINITY;
            omnivar.t_float = +INFINITY;
            omnivar.t_int = 0;
            cout << "char: impossible" << endl;
            cout << "int: impossible" << endl;
            cout << "float: +inff" << endl;
            cout << "double: +inf" << endl;
            break;
        }
        case NEGATIVE_INF:
        {
            omnivar.t_char = 0;
            omnivar.t_double = -INFINITY;
            omnivar.t_float = -INFINITY;
            omnivar.t_int = 0;
            cout << "char: impossible" << endl;
            cout << "int: impossible" << endl;
            cout << "float: -inff" << endl;
            cout << "double: -inf" << endl;
            break;
        }
        case NANF:
        {
            omnivar.t_char = 0;
            omnivar.t_double = 0;
            omnivar.t_float = 0;
            omnivar.t_int = 0;
            cout << "char: impossible" << endl;
            cout << "int: impossible" << endl;
            cout << "float: nanf" << endl;
            cout << "double: nan" << endl;
            break;
        }
        case FLOAT:
        {
            omnivar.t_float = stof98(param);
            omnivar.t_char = static_cast<char>(omnivar.t_float);
            omnivar.t_double = static_cast<double>(omnivar.t_float);
            omnivar.t_int = static_cast<int>(omnivar.t_float);
            if (omnivar.t_char < 32 || omnivar.t_char > 126)
                cout << "char: unprintable!" << endl;
            else
                cout << "char: " << omnivar.t_char << endl;
            cout << "int: " << omnivar.t_int << endl;
            cout << "float: " << omnivar.t_float << endl;
            cout << "double: " << omnivar.t_double << endl;
            break;
        }
        case DOUBLE:
        {
            omnivar.t_double = stod98(param);
            omnivar.t_float = static_cast<float>(omnivar.t_double);
            omnivar.t_char = static_cast<char>(omnivar.t_double);
            omnivar.t_int = static_cast<int>(omnivar.t_double);
            if (omnivar.t_char < 32 || omnivar.t_char > 126)
                cout << "char: unprintable!" << endl;
            else
                cout << "char: " << omnivar.t_char << endl;
            cout << "int: " << omnivar.t_int << endl;
            cout << "float: " << omnivar.t_float << endl;
            cout << "double: " << omnivar.t_double << endl;
            break;
        }
        case CHAR:
        {
            omnivar.t_char = param[0];
            omnivar.t_double = static_cast<double>(omnivar.t_char);
            omnivar.t_float = static_cast<float>(omnivar.t_char);
            omnivar.t_int = static_cast<int>(omnivar.t_char);
            if (omnivar.t_char < 32 || omnivar.t_char > 126)
                cout << "char: unprintable!" << endl;
            else
                cout << "char: " << omnivar.t_char << endl;
            cout << "int: " << omnivar.t_int << endl;
            cout << "float: " << omnivar.t_float << endl;
            cout << "double: " << omnivar.t_double << endl;
            break;
        }
        case INT:
        {
            omnivar.t_int = stoi98(param);
            omnivar.t_char = static_cast<char>(omnivar.t_int);
            omnivar.t_double = static_cast<double>(omnivar.t_int);
            omnivar.t_float = static_cast<float>(omnivar.t_int);
            if (omnivar.t_char < 32 || omnivar.t_char > 126)
                cout << "char: unprintable!" << endl;
            else
                cout << "char: " << omnivar.t_char << endl;
            cout << "int: " << omnivar.t_int << endl;
            cout << "float: " << omnivar.t_float << endl;
            cout << "double: " << omnivar.t_double << endl;
            break;           
        }
    }
    return omnivar;
}

Type ScalarConverter::getType(string param)
{
    if (param == "+inff" || param == "+inf")
        return (POSITIVE_INF);
    else if (param == "-inf" || param == "-inff")
        return (NEGATIVE_INF);
    else if (param == "nanf" || param == "nan")
        return (NANF);

    int i = 0;
    while (param[i])
    {
        if (param[i] == '.')
        {
            if (param[param.size() - 1] == 'f' || param[param.size() - 1] == 'F')
                return (FLOAT);
            else
                return (DOUBLE);
        }
        if (param[i] >= '0' && param[i] <= '9')
            i++;
        else
            return (CHAR);
    }
    return (INT);
}

int ScalarConverter::stoi98(const std::string& str) {
    int result = 0;
    int sign = 1;
    size_t i = 0;

    // Skip whitespace
    while (i < str.length() && std::isspace(str[i])) {
        ++i;
    }

    // Check for a sign
    if (i < str.length() && (str[i] == '-' || str[i] == '+')) {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }

    // Convert digits to integer
    while (i < str.length() && std::isdigit(str[i])) {
        int digit = str[i] - '0';

        // Check for overflow
        if (result > (INT_MAX - digit) / 10) {
            throw std::out_of_range("stoi98: out of range");
        }

        result = result * 10 + digit;
        ++i;
    }

    // Handle trailing characters
    if (i != str.length()) {
        throw std::invalid_argument("stoi98: invalid argument");
    }

    return sign * result;
}

float ScalarConverter::stof98(const std::string& str) {
    size_t i = 0;
    int sign = 1;
    float result = 0.0;
    float factor = 1.0;
    bool decimal_found = false;
    int exponent_sign = 1;
    int exponent = 0;

    // Skip leading whitespace
    while (i < str.length() && std::isspace(str[i])) {
        ++i;
    }

    // Check for sign
    if (i < str.length() && (str[i] == '-' || str[i] == '+')) {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }

    // Convert digits
    while (i < str.length() && (std::isdigit(str[i]) || str[i] == '.')) {
        if (str[i] == '.') {
            if (decimal_found) {
                throw std::invalid_argument("stof98: multiple decimal points");
            }
            decimal_found = true;
        } else {
            if (decimal_found) {
                factor /= 10.0;
                result += (str[i] - '0') * factor;
            } else {
                result = result * 10.0 + (str[i] - '0');
            }
        }
        ++i;
    }

    // Check for exponent
    if (i < str.length() && (str[i] == 'e' || str[i] == 'E')) {
        ++i;
        if (i < str.length() && (str[i] == '-' || str[i] == '+')) {
            exponent_sign = (str[i] == '-') ? -1 : 1;
            ++i;
        }

        while (i < str.length() && std::isdigit(str[i])) {
            exponent = exponent * 10 + (str[i] - '0');
            ++i;
        }
    }

    // Skip trailing non-numeric characters
    while (i < str.length() && !std::isdigit(str[i]) && str[i] != '.') {
        ++i;
    }

    // Handle trailing characters
    if (i != str.length()) {
        throw std::invalid_argument("stof98: invalid argument");
    }

    // Apply the exponent
    result *= std::pow(10.0f, exponent_sign * exponent);

    // Handle overflow
    if (result > std::numeric_limits<float>::max()) {
        throw std::out_of_range("stof98: out of range");
    }

    return sign * result;
}

double ScalarConverter::stod98(const std::string& str) {
    size_t i = 0;
    int sign = 1;
    double result = 0.0;
    double factor = 1.0;
    bool decimal_found = false;
    int exponent_sign = 1;
    int exponent = 0;

    // Skip leading whitespace
    while (i < str.length() && std::isspace(str[i])) {
        ++i;
    }

    // Check for sign
    if (i < str.length() && (str[i] == '-' || str[i] == '+')) {
        sign = (str[i] == '-') ? -1 : 1;
        ++i;
    }

    // Convert digits
    while (i < str.length() && (std::isdigit(str[i]) || str[i] == '.')) {
        if (str[i] == '.') {
            if (decimal_found) {
                throw std::invalid_argument("stod98: multiple decimal points");
            }
            decimal_found = true;
        } else {
            if (decimal_found) {
                factor /= 10.0;
                result += (str[i] - '0') * factor;
            } else {
                result = result * 10.0 + (str[i] - '0');
            }
        }
        ++i;
    }

    // Check for exponent
    if (i < str.length() && (str[i] == 'e' || str[i] == 'E')) {
        ++i;
        if (i < str.length() && (str[i] == '-' || str[i] == '+')) {
            exponent_sign = (str[i] == '-') ? -1 : 1;
            ++i;
        }

        while (i < str.length() && std::isdigit(str[i])) {
            exponent = exponent * 10 + (str[i] - '0');
            ++i;
        }
    }

    // Skip trailing non-numeric characters
    while (i < str.length() && !std::isdigit(str[i]) && str[i] != '.') {
        ++i;
    }

    // Handle trailing characters
    if (i != str.length()) {
        throw std::invalid_argument("stod98: invalid argument");
    }

    // Apply the exponent
    result *= std::pow(10.0, exponent_sign * exponent);

    // Handle overflow
    if (result > std::numeric_limits<double>::max()) {
        throw std::out_of_range("stod98: out of range");
    }

    return sign * result;
}
