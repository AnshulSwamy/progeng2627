#include <iostream>

int main(){
    /*double n1, n2, sum;

    std::cin >> n1;
    std::cin >> n2;
    
    sum = n1 * n2;

    std::cout << sum << std::endl;*/

    /*double a, b, c;

    a = 1;
    b = 2;
    c = a + b;
    
    std::cout << c << std::endl;

    a = 2;
    std::cout << c << std::endl;
    //Expect output to be 3 since the value being held at c has not been altered

    c = a + b;
    std::cout << c << std::endl;
    //Expect 4 to be outputted as value of a has been altered*/

    //BMI calc
    
    double weight, height, bmi;

    std::cout << "Enter weight" << std::endl;
    std::cin >> weight;

    std::cout << "Enter height" << std::endl;
    std::cin >> height;

    bmi = weight / (height*height);
    std::cout << "BMI: " << bmi << std::endl;
}