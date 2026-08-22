#include <iostream>
using namespace std;
void print(int arr[], int n);
int main(){
    int n;
    cout<<"Enter the length of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    cout<<"Enter the number of times to rotate the array: ";
    int k;
    cin>>k;
    k=k%n;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            arr[i]=arr[i]+arr[j];
            arr[j]=arr[i]-arr[j];
            arr[i]=arr[i]-arr[j]; 
        }
    }
    for(int i=k;i<n;i++){
        for(int j=i+1;j<n;j++){
        arr[i]=arr[j]+arr[i];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    } 
    }
    cout<<"The rotated array is : "<<endl;
    print(arr, n);
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}