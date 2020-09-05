#include <iostream>

namespace sign
{
    _declspec(dllexport) void transact();
    _declspec(dllexport) void display();
}

int main()
{
    std::cout << "Hello World!\n";
    sign::transact();
    sign::display();
}