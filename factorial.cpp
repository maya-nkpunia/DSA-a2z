#include "my_header.h"
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>> num;
    int result = factorial(num);
    cout<<"The factorial of "<<num <<" is " << result;
}