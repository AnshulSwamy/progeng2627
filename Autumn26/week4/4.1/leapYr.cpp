#include <iostream>

bool leap(int year){
    bool ly;

    if ((year % 4) == 0){
        if ((year % 100) == 0){
            if ((year % 400) == 0){
                ly = 1;
                return ly;
            }
            ly = 0;
        }
        else {
            ly = 1;
        }
    }
    else{
        ly = 0;
    }
    return ly;
}

int main(){
    int input;

    //std::cout << "enter year" << std::endl;
    //std::cin >> input;

    std::string output = (leap(1600)) ? "leap year" : "not leap year";
    std::cout << output << std::endl; 
    output = (leap(1700)) ? "leap year" : "not leap year";
    std::cout << output << std::endl; 
    output = (leap(2000)) ? "leap year" : "not leap year";
    std::cout << output << std::endl; 
    output = (leap(1800)) ? "leap year" : "not leap year";
    std::cout << output << std::endl; 
}