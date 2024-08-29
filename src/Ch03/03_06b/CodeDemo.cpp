// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "The content of a is " << a << std::endl;
    std::cout << "ptr is pointing to address " << ptr << std::endl;
    std::cout << "the address of a " << &a << std::endl;
    std::cout << "where ptr pointing, we have " << *ptr << std::endl;
    std::cout << "the address of ptr" << &ptr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
