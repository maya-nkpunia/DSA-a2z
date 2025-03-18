#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    int sum = 0;

    while (temp > 0) {
        int lastDigit = temp % 10;   
        sum += lastDigit * lastDigit * lastDigit;  
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
