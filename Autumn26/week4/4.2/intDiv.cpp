#include <iostream>

void intDiv(int a, int b, int& res, int& rem){
    res = a / b; 
    rem = a - (res*b);
}

int main(){
    int a, b;
    int res = 0, rem;

    intDiv(3, 2, res, rem);
    std::cout << "3/2 >> Res: " << res << " Rem: " << rem <<std::endl;
    intDiv(7, 2, res, rem);
    std::cout << "7/2 >> Res: " << res << " Rem: " << rem <<std::endl;
    intDiv(9, 3, res, rem);
    std::cout << "9/3 >> Res: " << res << " Rem: " << rem <<std::endl;
}