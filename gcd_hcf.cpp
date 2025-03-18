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
    int n1 = 20, n2 = 15;
    int gcd = findGcd(n1, n2);
    cout << "GCD of num1 and num2 is: " << n1 << " , " << n2; 

    return 0;
}


                                
                            