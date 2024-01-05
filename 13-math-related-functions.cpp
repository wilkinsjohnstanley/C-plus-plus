#include <iostream>
#include <cmath>
int main()
{
    double x = 3;
    double y = 4;
    double z;
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;

//determine the max with built-in function
    z=std::max(x,y);
    std::cout<<z << "\n";
//determine the min with built-in function
    a=std::min(x,y);
    std::cout<<a << "\n";;
//the power of 
    b=std::pow(2, 4);
    std::cout << b << "\n";

//square root
    c=std::sqrt(9);
    std::cout << c <<"\n";

//absolute value
    d=std::abs(-9);
    std::cout << d <<"\n";

//round up
    e=std::round(1.9);
    std::cout << e <<"\n";

//round up - ceiling
    f=std::ceil(3.9);
    std::cout << f <<"\n";

//round down - floor
    g=std::floor(3.9);
    std::cout << g <<"\n";


    return 0;
}

