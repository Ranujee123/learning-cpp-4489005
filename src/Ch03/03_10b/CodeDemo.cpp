// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 7,cow_purpose::meat));
    cattle.push_back(cow("Honey", 2,cow_purpose::pet));
    cattle.push_back(cow("Tuny", 17,cow_purpose::hide));
    cattle.push_back(cow("Sony", 23,cow_purpose::dairy));

    std::cout<<"The name of the first cow is "<< cattle.begin()->get_name()<<std::endl;
    std::cout<<"At index 1 "<< cattle.begin()->get_name()<<std::endl;
    std::cout<<"The name of the first cow is "<< cattle.begin()->get_name()<<std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
