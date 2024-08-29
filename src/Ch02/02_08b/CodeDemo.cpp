// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
#define AGE_LENGTH 4
int main(){
    int age[AGE_LENGTH];
    float temperature[]={31.4,34.5,98.3};


    age[0] = 25;
    age[1] = 35;
    age[2] = 40;
    age[3] = 100;
    
    std::cout << "Age array length = " << AGE_LENGTH <<std::endl;
    std::cout << "Age[0] = " << age[0] <<std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << "temperature 1 = " << temperature[0] <<std::endl;
    std::cout << "temperature 2 = " << temperature[1] <<std::endl;
    std::cout << "temperature 3 = " << temperature[2] <<std::endl;
   

    
    std::cout << std::endl << std::endl;
    return (0);
}
