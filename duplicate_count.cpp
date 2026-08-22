#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int brr[n];
    int count=0;
    cout<<"Duplicated elements in the array are: ";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                brr[count]=arr[i];
                count++;
                break;
            }
        }
    }
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(brr[j]<brr[i]){
                int temp=brr[i];
                brr[i]=brr[j];
                brr[j]=temp;
            }
        }
    }
    for(int i=0; i<count; i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}