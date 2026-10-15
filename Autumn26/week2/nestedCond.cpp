#include <iostream>

int main(){
    int year;
    std::cout << "enter year" << std::endl;
    std::cin >> year;
    
    if ((year % 4) == 0){
        if ((year % 100) == 0){
            if ((year % 400) == 0){
                std::cout << "leap year" << std::endl;
                return 0;
            }
            std::cout << "not leap year" << std::endl; 
        }
        else {
            std::cout << "leap year" << std::endl;
        }
    }
    else{
        std::cout << "not leap year" << std::endl; 
    }
}
