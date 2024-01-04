#include <iostream>

namespace alternateUniverse{
    int doppleganger = 1;

}

int main(){
    int doppleganger = 2;
    std::cout << doppleganger << '\n';
//use the alternate universe doppleganger
    std::cout << alternateUniverse::doppleganger;

    return 0;
}