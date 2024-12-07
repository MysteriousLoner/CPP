#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include "Data.hpp"

class Data;

class Serialize {
public:
    static unsigned long serialize(Data* ptr);
    static Data* deserialize(unsigned long raw);
};

#endif
