#include <iostream>
using namespace std;
int main() {
    cout << "Enter the length of the array: " << endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array: " << endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int brr[n];
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i]*arr[i];
    }
    cout<<"The elements of the new array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}