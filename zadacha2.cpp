#include <iostream>
long long numcount(long long n, long long b){
if(n<10&&n>-10){
return n;
}
int backwardsNum=0;
while(n!=0){
    backwardsNum=backwardsNum*10+n%10;
    n/=10;
}
return backwardsNum;
}
void mirrorNum(long long n){
int count=0;
int firstNum=0;
std::cout<<"Enter number 1: ";
std::cin>>firstNum;
for(int i=1;i<n;i++){
    int secondNum=0;
    std::cout<<"Enter number "<<i+1<<": ";
    std::cin>>secondNum;
    if(numcount(firstNum,secondNum)==secondNum){
        count++;
    }
    firstNum=secondNum;
}
std::cout<<"Count: "<<count<<std::endl;
}

int main(){
    long long n;
    std::cout << "Enter N: ";
    std::cin>> n;
mirrorNum(n);
return 0;
}