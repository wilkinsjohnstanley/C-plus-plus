#include <iostream>

namespace alternateUniverse{
    int doppleganger = 1;

}

int main(){
    /*
    if you don't want to use the prefix, you can use the using keyword
    using namespace alternateUniverse;
    then it is assumed that the variable is the alternateUniverse variable
    */
    int doppleganger = 2;
    std::cout << doppleganger << '\n';
//use the alternate universe doppleganger
    std::cout << alternateUniverse::doppleganger;

    return 0;
}