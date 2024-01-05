#include<iostream>
int main(){
    std::string username;
    int deptnumber;

    std::cout <<"What's your department number? ";
    std::cin >> deptnumber;

    std::cout <<"What's your username? ";
    //ws = whitespace
    std::getline(std::cin >> std::ws, username);
    std::cout << "Welcome back! " << username << '\n';
    std::cout << "Your department number is  " << deptnumber << ", isn't it?";

    return 0;
}