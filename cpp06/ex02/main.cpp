#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Base* createRandomClass() {
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    switch (std::rand() % 3) {
        case 0: return new A;
        case 1: return new B;
        case 2: return new C;
    }
    return NULL;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        cout << "it's A!" << endl;
    } else if (dynamic_cast<B*>(p)) {
        cout << "it's B!" << endl;
    } else if (dynamic_cast<C*>(p)) {
        cout << "it's C!" << endl;
    } else {
        cout << "IT'S BLACK!!!" << endl;
    }
}

void identify(Base& p) {
    cout << "---------------------" << endl;
    const string type(p.whoAmI());

    if (type == "A") {
        cout << "Identified class: A (identify(Base &p))" << endl;
    } else if (type == "B") {
        cout << "Identified class: B (identify(Base &p))" << endl;
    } else if (type == "C") {
        cout << "Identified class: C (identify(Base &p))" << endl;
    } else {
        cout << "Identified class: unknown (identify(Base &p))" << endl;
    }
    cout << endl;
}

int main() {
    A* objA = new A;
    B* objB = new B;
    C* objC = new C;

    cout << "--------------testing--------------" << endl;
    objA->whoMe();
    objB->whoMe();
    objC->whoMe();
    cout << "--------------testing--------------" << endl;
    cout << "----------------Real---------------" << endl;
    Base* gacha = createRandomClass();
    identify(gacha);
    identify(*gacha);
    cout << "---------------------" << endl;
    delete gacha;
    delete objA;
    delete objB;
    delete objC;
    cout << "----------------Real---------------" << endl;
}
