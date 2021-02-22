#include <iostream>

#include <stdint.h>

#include "SwiftInterpreter.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "Hello, from C++!\n\n";

    int result = swift::sayHello("Ron", "Swanson");
    return result;
}
