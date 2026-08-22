#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the lenght of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int ar[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    n++;
    int num,index;
    cout<<"Enter the number to be inserted"<<endl;
    cin>>num;
    cout<<"Enter the place to inserted"<<endl;
    cin>>index;
    for(int i=n-1;i>index;i--){
        ar[i]=ar[i-1];
    }
    ar[index]=num;
    cout<<"New array elements :: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }
}