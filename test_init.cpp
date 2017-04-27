#include <iostream>
#include <string>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << global_str << "\n" << std::endl;
    std::cout << global_int << "\n" << std::endl;

    std::cout << local_int << "\n" << std::endl;
    std::cout << local_str << "\n" << std::endl;

    return 0;
}