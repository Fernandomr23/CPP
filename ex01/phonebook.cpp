#include "phonebook.hpp"

Test::Test(void)
{
    std::cout << "Constructor Called" << std::endl;
    return ;
}

Test::~Test(void)
{
    std::cout << "Destructor Called" << std::endl;
    return ;
}

int main(void)
{
    Test    prueba;

    return (0);
}