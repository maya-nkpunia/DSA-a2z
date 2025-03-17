#include "my_header.h"
using namespace std;

int countDigits(int num){
    int count = 0;
    while(num > 0){
        count++;
        num = num/10;
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int digitCount = countDigits(num);
    cout<< "Number of digits: "<<digitCount;
    return 0;
}