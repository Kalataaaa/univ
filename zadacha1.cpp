#include <iostream>

int addingDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + addingDigits(n / 10);
}
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Sum of digits: " << addingDigits(number) << std::endl;
    return 0;
}
