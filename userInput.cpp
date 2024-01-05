#include <iostream>
//cout << (insertion operator AKA output)
//cin >> (extraction operator AKA input)
int main(){
    std::string name;

    std::cout <<"What's your name bro?";
    std::cin>> name;

    std::cout<<"Hello "<<name;
    return 0;
}