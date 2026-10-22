#include <iostream>

int main(){
    /*int n;
    int i = 0, j = 0;
    std::cin >> n;

    while (i < n){
        while (j < n){
            std::cout << "* ";
            j++;
        }
        j = 0;
        i++;
        std::cout << "" << std::endl;
    }*/

    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            std::cout << j * i << "\t";
        }
        std::cout << "" << std::endl;
    }
}