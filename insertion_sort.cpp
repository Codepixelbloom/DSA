#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the length of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key){a[j+1]=a[j];j--;}
        a[j+1]=key;
    }
    cout<<"Sorted array::"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}