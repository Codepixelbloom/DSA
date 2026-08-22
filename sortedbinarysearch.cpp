#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the array: ";  
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<< "Enter the number to search: ";
    cin>>num;
    int low=0,high=n-1,mid=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(num==arr[mid]){
                cout<<"Element found at index: "<<mid;
                return 0;
            }
        if(arr[low]<=arr[mid]){ 
            if(arr[low]<=num && num<arr[mid]){high=mid-1;}
            else {low=mid+1;}
        }
        else{
            if(arr[mid]<num && arr[high]>=num){low=mid+1;}
            else {high=mid-1;}
        }   
             w
    }
    cout<<"Element not found";
    return 0;
}