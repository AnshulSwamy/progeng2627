#include <iostream>

void swapNum(double& n1, double& n2){
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sortTwo(double& s1, double& s2){
    if (s1 > s2){
        swapNum(s1, s2);
    }
}

void sortThree(double& s1, double& s2, double& s3){
    sortTwo(s1, s2);
    sortTwo(s2, s3);
    sortTwo(s1, s2);
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    //sortTwo(n1, n2);
    sortThree(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}