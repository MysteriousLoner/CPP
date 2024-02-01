#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using namespace std;

class Fixed{
private:
    int integer;
    static const int fixed_int = 8;
public:
    Fixed(void);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif