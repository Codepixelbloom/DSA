#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the lenght of the array: ";
    cin>>n;
    int arr[n];
       cout<<"Enter the value of element "<<endl;
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    int largest=INT_FAST8_MIN,second_largest=INT_FAST8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    cout<<"Largest element: "<<largest<<endl;
    cout<<"Second largest element: "<<second_largest<<endl;
}