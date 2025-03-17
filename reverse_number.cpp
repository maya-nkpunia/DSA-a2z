#include "my_header.h"
using namespace std;

int main(){
    
    int num;
    cout<< "Enter a number: ";
    cin >> num;
    int reverse = 0;

    while(num > 0){

        int lastDigit = num % 10;
        reverse = (reverse*10) + lastDigit;
        num = num/10;
    }
    cout<< reverse;
}