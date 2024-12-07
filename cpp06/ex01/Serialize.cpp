#include "Serialize.hpp"

unsigned long Serialize::serialize(Data* ptr) {
    return reinterpret_cast<unsigned long>(ptr);
}

Data* Serialize::deserialize(unsigned long raw) {
    return reinterpret_cast<Data*>(raw);
}
