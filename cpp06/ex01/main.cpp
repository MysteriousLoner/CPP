#include "Serialize.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
    Data* data = new Data;
    data->setName("aaaaa");
    std::cout << "data: " << data << std::endl;
    unsigned long ptr = Serialize::serialize(data);
    std::cout << "data after serialize: " << ptr << std::endl;
    data = Serialize::deserialize(ptr);
    std::cout << "data after reserialize: " << data << std::endl;
    delete data;
}