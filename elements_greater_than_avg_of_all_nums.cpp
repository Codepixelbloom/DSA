#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the length of the array: "<<endl;
    int n;
    cin>>n; 
    cout<<"Enter the elements of the array: "<<endl;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int avg=sum/n;
    cout<<"Elements greater than average: "<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}