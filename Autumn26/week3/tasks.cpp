#include <iostream>
#define LESS 0
#define GREATER 1
#define CORRECT 2

int main(){
    //Maximum number

    /*int max, min, n;

    std::cout << "Enter: " << std::endl;
    std::cin >> n;

    max = n;
    min = n;

    while (n != 0){
        std::cout << "Current Max: " << max << "\n" << "Current Min: " << min << "\n" << "Enter: " << std::endl;
        std::cin >> n;
        if (n > max){
            max = n;
        }
        if (n < min && n != 0){
            min = n;
        }
    }
    std::cout << "Current Max: " << max << "\n" << "Current Min: " << min << std::endl;*/

    //Collatz conjecture

    /*int n, max;
    int steps = 0;
    
    std::cin >> n;
    max = n;

    while (n != 1){
        if (n % 2 == 0)
            n /= 2;
        else{
            n *= 3;
            n += 1;
        }
        steps += 1;
        max = (n > max) ? n : max;
        std::cout << n << " "; 
    }

    std::cout << "\n" << "Steps: " << steps << std::endl;
    std::cout << "Max num reached: " << max << std::endl;*/

    //Guess Number

    /*int high, low, guess;
    int guessNum = 0;
    int feedback = 0;
    
    std::cout << "Enter range (lo -> hi)" << std::endl;
    std::cin >> low >> high;

    while (feedback != CORRECT){
        guess = (high + low)/2;
        std::cout << "Guess: " << guess << std::endl;
        std::cout << "Is this correct, or is it less or great than your number:\n"; 
        std::cout << "Less than (0)\nGreater than (1)\nCorrect(2)" << std::endl;
        std::cin >> feedback;
        if (feedback == LESS){
            low = guess;
        }
        if (feedback == GREATER){
            high = guess;
        }
        guessNum += 1;
    }
    std::cout << "Your number is: " << guess << std::endl;
    std::cout << "Took " << guessNum << " guesses" << std::endl;*/

    //Prime Numbers

    int n;
    int cf = 2;
    bool factor = false;

    std::cout << "Enter int > 1" << std::endl;

    std::cin >> n;

    /*for (int cf = 2; cf < n; cf++){
        if (n % cf == 0){
            factor = true;
        }
    }*/

    while (!factor && cf < n){
        if (n % cf++ == 0)
            factor = true;
    }

    if (factor){
        std::cout << n << " is not prime" << std::endl;
    }
    else{
        std::cout << n << " is prime" << std::endl;
    }
}