#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <exception>

using std::cout;
using std::endl;
using std::string;
using std::exception;

Base* createRandomClass() {
    std::srand(static_cast<unsigned int>(std::time(0)));

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

// void identify(Base& p) {
//     cout << "---------------------" << endl;
//     const string type(p.whoAmI());

//     if (type == "A") {
//         cout << "Identified class: A (identify(Base &p))" << endl;
//     } else if (type == "B") {
//         cout << "Identified class: B (identify(Base &p))" << endl;
//     } else if (type == "C") {
//         cout << "Identified class: C (identify(Base &p))" << endl;
//     } else {
//         cout << "Identified class: unknown (identify(Base &p))" << endl;
//     }
//     cout << endl;
// }

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        cout << "type A" << endl;
    } catch (exception &e) {
        try {
            B &b = dynamic_cast<B &>(p);
            (void)b;
            cout << "type B" << endl;
        } catch (exception &e) {
            try {
                C &c = dynamic_cast<C &>(p);
                (void)c;
                cout << "type c" << endl;
            } catch (exception &e) {
                cout << "non of the above" << endl;
            }
        }
    }
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
