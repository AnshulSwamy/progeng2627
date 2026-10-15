#include <iostream>

int main(){
    /*int n, rem;

    std::cout << "enter number" << std::endl;
    std::cin >> n;

    rem = n % 3;
    if (rem == 0){
        std::cout << "multiple of 3" << std::endl;
    }
    else{
        std::cout << "not multiple of 3" << std::endl;
    }*/
    
    double n, absv;

    std::cout << "enter number " << std::endl;
    std::cin >> n;

    absv = (n < 0) ? -n : n;
    std::cout << "|" << n << "| = " << absv << std::endl;
}
