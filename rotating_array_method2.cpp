#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of times to rotate the array: ";
    int k;
    cin>>k;
    int count=0;
    k=k%n;
    for(int i=n-k;i<n;i++){
        temp[count]=arr[i];
        count++;
    }
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int i=0;i<count;i++){
        arr[i]=temp[i];
    }
    cout<<"The rotated array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}