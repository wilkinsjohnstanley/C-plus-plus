#include <iostream>
int main()
{
    int age;
    std::cout<<"What is your age?"<<"\n";
    std::cin >> age;

    if(age>= 18){
std::cout<<"Welcome bro. You are old enough."<<"\n";
    } else {
std::cout<<"Sorry young padawon, you are not sufficiently aged."<<"\n";
    }
    return 0;
}