#include "Data.hpp"

int main()
{
    Data *ptr = new Data;
    ptr->first_name = "mehdi";
    ptr->last_name = "bouabbadi";
    ptr->id = 145002527;
    ptr->score = 17.23;

    std::cout << "First name: " << ptr->first_name << std::endl
              << "Last name: " << ptr->last_name << std::endl
              << "Id: " << ptr->id << std::endl
              << "Score: " << ptr->score << std::endl;
    uintptr_t un = serialize(ptr);
    delete ptr;
    Data *ptr2 = deserialize(un);
    std::cout << "First name: " << ptr2->first_name << std::endl
              << "Last name: " << ptr2->last_name << std::endl
              << "Id: " << ptr2->id << std::endl
              << "Score: " << ptr2->score << std::endl;
    return (0);
}