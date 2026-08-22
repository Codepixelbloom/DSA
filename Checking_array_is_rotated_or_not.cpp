#include <iostream>
using namespace std;
bool sorted(int ar[],int n);
int main(){
    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        int last=ar[n-1];
        for(int j=n-1;j>0;j--){
            ar[j]=ar[j-1];
        }
        ar[0]=last;
        if(sorted(ar,n)){
            cout<<"Array is rotated or sorted.....";
            return 0;
        }
    }
    cout<<"Array is not sorted....";
}

bool sorted(int ar[],int n){
    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1])
        return false;
    }
    return true;
}