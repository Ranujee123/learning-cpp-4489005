// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your Name:" << std::flush;//flush makes sure that the output is completly sent to the terminal before waiting for the user input
    std::cin >> str;
   // std::cout << "Your name is " + str;
   std::cout << "Nice to meet you ," <<str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
