#include <iostream>
#include <cmath>
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

double powSum(int x, int n){
    double sum = 0;
    for (int i = 1; i < (n+1); i++){
        sum += pow(x, i);
    }
    return sum;
}

int main(){
    //int x, n;
    //std::cin >> x >> n;

    std::cout << "sum of powers of 2, from 1 to 3: " << powSum(2,3) << std::endl;
    std::cout << "sum of powers of 3, from 1 to 2: " << powSum(3,2) << std::endl;
    std::cout << "sum of powers of 4, from 1 to 5: " << powSum(4,5) << std::endl;
    return 0;
}
