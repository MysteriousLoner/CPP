#include "Omnivar.hpp"

template <typename T>
static bool hasDecimalPlace(T num) {
    int integerPart = static_cast<int>(num);
    return num != integerPart;
}

void Omnivar::printVars() const {
    if (this->t_char < 32 || this->t_char > 126) {
        cout << "char: unprintable!" << endl;
    } else {
        cout << "char: " << this->t_char << endl;
    }
    cout << "int: " << this->t_int << endl;
    if (hasDecimalPlace(this->t_float)) {
        cout << "float: " << this->t_float << "f" << endl;
    } else {
        cout << "float: " << this->t_float << ".0f" << endl;
    }
    if (hasDecimalPlace(this->t_double)) {
        cout << "double: " << this->t_double << endl;
    } else {
        cout << "double: " << this->t_double << ".0" << endl;
    }
}
