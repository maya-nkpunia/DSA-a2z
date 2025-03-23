#include "my_header.h"
using namespace std;

bool isPalindrome(string str){
    int left = 0, right = str.size()-1;

    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if(isPalindrome(str)){
        cout<< "The given string is palindrome"<<endl;
    }
    else{
        cout<< "The given string is not palindrome";
    }

    return 0;
}