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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    cout<<"Sorted array::"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}