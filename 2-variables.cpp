#include <iostream>
//use CTRL + K + CTRL + T to change colors in VS Code
int main(){

    int x; //declaration
    x=5; //assignment
    int y  = 6;
    int sum = x+y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
//double (number including a decimal)
    double price = 10.99;
    double GPA = 3.7;
    double temperature = 25.1;
    std::cout << price << '\n';
//char
    char grade = 'A';
    char initial = 'J';
    std::cout << grade << '\n';
    char currency = '$';
//boolean
    bool student = true;
    bool power = true;
    bool inStock = false;
//strings (an object that represents a sequence of text)
//strings are provided from the standard namespace
    std::string name = "John";
    std::cout << name;

    return 0;
}