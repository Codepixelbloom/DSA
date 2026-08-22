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
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(a[index]>a[j]){
                index=j;
            }
        }
       if(index!=i){
        a[i]=a[i]+a[index];
        a[index]=a[i]-a[index];
        a[i]=a[i]-a[index];
       }
    }
    cout<<"Sorted array::"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}