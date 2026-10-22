#include <iostream>

int myFact(int n){
    int fact = 1;

    for (int i = n; i > 1; i--){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    std::cout << "Enter num" << std::endl;
    std::cin >> n;
    std::cout << "fact of " << n << ": " << myFact(n) << std::endl;
}