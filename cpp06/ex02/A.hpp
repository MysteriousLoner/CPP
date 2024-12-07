#ifndef A_HPP
#define A_HPP

#include "Base.hpp"
class A : public Base {
private:
    const string type;
public:
    A();
    ~A();
    void whoMe();
    virtual const char* whoAmI() { return "A"; }
};

#endif