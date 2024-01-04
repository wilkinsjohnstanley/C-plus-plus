#include <iostream>

int main() {
//const is read only
    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    return 0;
}