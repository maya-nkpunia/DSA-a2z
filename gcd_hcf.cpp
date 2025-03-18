#include "my_header.h"
using namespace std;

int findGcd(int num1, int num2) {
    
    
    for(int i = min(num1, num2); i > 0; i--) {
        if(num1 % i == 0 && num2 % i == 0) {
            return i;
        }
    }
    return 1;
}


int main() {
    int num1, num2;
    cout<< "Enter two numbers: ";
    cin>>num1>>num2;
    int gcd = findGcd(num1, num2);
    cout << "GCD of num1 and num2 is: " << num1 << " , " << num2; 

    return 0;
}


                                
                            