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
    cout<<"Enter the number to be searched: ";
    int num;
    cin>>num;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<"Number found at index: "<<i<<endl;
            return 0;
        }
    }
    cout<<"Number not found."<<endl;
    return 0;
}