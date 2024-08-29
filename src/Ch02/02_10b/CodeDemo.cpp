// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
     int32_t sgn;
     uint32_t unsgn;

     flt = -4.88;
     sgn = flt;
     unsgn = sgn;

     std::cout << "The float = "<< flt <<std::endl;
     std::cout << "The signed = "<< sgn <<std::endl;
     std::cout << "The unsigned = "<< (int32_t)unsgn <<std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
