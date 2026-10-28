#include <iostream>

bool leap(int year){
    bool ly;

    if ((year % 4) == 0){
        if ((year % 100) == 0){
            if ((year % 400) == 0){
                ly = 1;
                return ly;
            }
            ly = 0;
        }
        else {
            ly = 1;
        }
    }
    else{
        ly = 0;
    }
    return ly;
}

void nextDate(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int days;
    if (m1 == 2){
        d1 += 1;
        m2 = ((d1 == 29 && !leap(y1)) || (d1 == 30 && leap(y1))) ? m1 + 1 : m1;
        d2 = ((d1 == 29 && !leap(y1)) || (d1 == 30 && leap(y1))) ? 1 : d1;
        y2 = y1;
        return;
    }

    if (m1 < 8){
        days = ((m1 % 2) == 0) ? 30 : 31;
    }
    else if (m1 > 7){
        days = ((m1 % 2) == 0) ? 31 : 30;
    }
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;
    if (d2 > days){
        d2 = 1;
        m2 += 1;
    }
    if (m2 > 12){
        y2 = y1 + 1;
        m2 = 1;
    }
}

int main(){
    int d2, m2, y2;

    nextDate(31, 12, 1999, d2, m2, y2);
    std::cout << "Date: 31/12/1999" << std::endl;
    std::cout << "Next date: " << d2 << "/" << m2 << "/" << y2 << std::endl;
    nextDate(28, 2, 1999, d2, m2, y2);
    std::cout << "Date: 28/02/1999" << std::endl;
    std::cout << "Next date: " << d2 << "/" << m2 << "/" << y2 << std::endl;
    nextDate(28, 2, 2000, d2, m2, y2);
    std::cout << "Date: 28/02/2000" << std::endl;
    std::cout << "Next date: " << d2 << "/" << m2 << "/" << y2 << std::endl;
    nextDate(29, 2, 2000, d2, m2, y2);
    std::cout << "Date: 29/02/2000" << std::endl;
    std::cout << "Next date: " << d2 << "/" << m2 << "/" << y2 << std::endl;
    nextDate(29, 3, 2010, d2, m2, y2);
    std::cout << "Date: 29/03/2010" << std::endl;
    std::cout << "Next date: " << d2 << "/" << m2 << "/" << y2 << std::endl;
}