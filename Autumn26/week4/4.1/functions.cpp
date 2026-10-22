#include <iostream>

double myabs(double in){ 
    return (in < 0) ? -in : in;
}

int main(){
    double n;

    std::cout << "enter num" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
}

