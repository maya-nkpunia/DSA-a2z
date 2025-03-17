#include "my_header.h"
using namespace std;

bool isPalindrome(int num){
    int reverse = 0;
    int temp = num;

    while(num > 0){
       int lastDigit = num % 10;

       reverse = (reverse * 10) + lastDigit;

       num = num / 10;
    }

    if(temp == reverse) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(isPalindrome(num)){
        cout<<num<<" is a palindrome"<<endl;
    } else{
        cout<<num<<" is not a palindrome"<<endl;
    }
    return 0;
}