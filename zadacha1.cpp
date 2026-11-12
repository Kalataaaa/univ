#include <iostream>

long long localMax(long long n){
int count = 0;
long long firstNumber = 0;
long long secondNumber = 0;
long long thirdNumber = 0;
for (long long i=0;i<n;i++){
    std::cin >> firstNumber;
    std::cin >> secondNumber;
    std::cin >> thirdNumber;
    if(firstNumber > secondNumber && firstNumber > thirdNumber){
        count++;
    }
}
return count;
}

int main() {
    long long n;
    std::cout << "Enter N: ";
    std::cin >> n;
    std::cout << "Count of local maximums: " << localMax(n) << std::endl;
    return 0;
}
