#include <iostream>

void localMax(long long n) {
    if (n < 3) {
        std::cout << "Count of local maximums: 0" << std::endl;
        return; // Спираме функцията тук, за да не чете числа надолу
    }

    long long count = 0;
    long long firstNumber = 0;
    long long secondNumber = 0;
    long long thirdNumber = 0;

    std::cout << "Enter number 1: ";
    std::cin >> firstNumber;
    std::cout << "Enter number 2: ";
    std::cin >> secondNumber;

    for (long long i = 2; i < n; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> thirdNumber;

        if (secondNumber > firstNumber && secondNumber > thirdNumber) {
            count++;
        }

        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }

    std::cout << "Count of local maximums: " << count << std::endl;
}

int main() {
    long long n;
    std::cout << "Enter N: ";
    std::cin >> n;

    localMax(n); // Извикваме функцията!

    return 0;
}