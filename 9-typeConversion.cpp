#include <iostream>
int main(){
/*
type conversion = convert a value of one data type to another
Implicit = automatic
Explicit = Precede value with new data type 
*/

//Implicit, it will be output as 3
    int x = 3.14;
    std::cout <<x;
//Explicit, it will be output as 3
    double y = (int) 3.14;
    std::cout<<y;

//Implicit. d=100 in ASCII table
char z = 100;
std::cout <<z;
//Explicit cast
std::cout << (char) 100;

return 0;
}