#include "my_header.h"
using namespace std;

void reversedArray(int arr[], int n){
    int left = 0, right = n-1;

    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter " << n << "elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    reversedArray(arr, n);
    cout<<"Reversed array: ";
    printArray(arr, n);

    return 0;
}