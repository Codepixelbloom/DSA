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
    for(int i=1;i<n;i+=2){
        arr[i-1]=arr[i]+arr[i-1];
        arr[i]=arr[i-1]-arr[i];
        arr[i-1]=arr[i-1]-arr[i];
    }
    cout<<"The modified array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}