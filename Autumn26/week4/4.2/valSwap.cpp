#include <iostream>

/*void swap(int *n1, int *n2){
    int tmp;
    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}*/

void swapNum(int& n1, int& n2){
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void swapStr(std::string& str1, std::string& str2){
    std::string tmp;
    tmp = str1;
    str1 = str2;
    str2 = tmp;
}

int main(){
    int n1, n2;
    std::string s1, s2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "please enter two values" << std::endl;
    std::cin >> s1 >> s2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    std::cout << "you entered:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    swapNum(n1, n2);
    swapStr(s1, s2);

    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
}
