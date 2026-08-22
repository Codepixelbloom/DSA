#include <iostream>
using namespace std;
int main(){
    int n,sum=0,pro=1;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==0){
            sum+=a[i];
        }
        else{
            pro*=a[i];
        }
    }
    cout<<"Sum of elements at even indices: "<<sum<<endl;
    cout<<"Product of elements at odd indices: "<<pro<<endl;
    return 0;
}