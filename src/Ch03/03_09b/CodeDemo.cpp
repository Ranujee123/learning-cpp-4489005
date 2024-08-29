// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<int>primes;

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(10);
    primes.push_back(4);
    primes.push_back(90);


    std::cout << "The vector has "<< primes.size()<<" elements"<<std::endl;
    std::cout<< "the value of position 3 is "<< primes[2]<<std::endl;
    primes[2]=45;
    std::cout<< "the value of position 3 is "<< primes[2]<<std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
