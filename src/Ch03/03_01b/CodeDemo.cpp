// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age=5;
    my_cow.name= "Besty";
    my_cow.purpose= cow_purpose::dairy;
    

    std::cout <<"my cow name = " << my_cow.name << " age = "<< my_cow.age << " purpose " << (int)my_cow.purpose << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
