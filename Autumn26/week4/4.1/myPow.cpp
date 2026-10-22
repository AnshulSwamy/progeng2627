#include <iostream>
#define TRUE 1
#define FALSE 0

double myPow(double base, double pow){
    double res = 1;
    int neg = FALSE;

    if (pow < 0){
        neg = TRUE;
        pow *= -1;        
    }

    for (int i = 0; i < pow; i++){
        res *= base;
    }
    return (neg == FALSE) ? res : 1/res;
}

int main(){
    std::cout << "2^3: " << myPow(2, 3) << std::endl;
    std::cout << "0.5^2: " << myPow(0.5, 2) << std::endl;
    std::cout << "1^0: " << myPow(2, -3) << std::endl;
}