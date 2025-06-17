// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> // '<>' means it will look for that file
#include <string> 
#include <cstdint> // using C header files 

#define CAPACITY 5000 //macros, here 'CAPACITY' will be replaced by 5000

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[About to perform addition]" 
#endif
    large += small; // shorthand for "large = large + small"

    std::cout << std::endl << std::endl;
    return (0);
}
