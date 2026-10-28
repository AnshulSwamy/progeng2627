#include <iostream>

void periArea(double& w, double& h, double& peri, double& area){
    peri = 2*(w+h);
    area = w*h;
}

int main(){
    double w, h, peri, area;

    std::cin >> w >> h;

    periArea(w, h, peri, area);
    std::cout << "Perimeter: " << peri << "\nArea: " << area << std::endl;
    std::cout << 7/2 << std::endl;
}