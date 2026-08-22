#include <iostream>
using namespace std;    
int main(){
    cout<<"Enter the length of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i] = arr[i];
    }
    cout<<"The elements of the copied array are: ";
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
}