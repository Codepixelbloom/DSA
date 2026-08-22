#include <iostream>
using namespace std;
void print(int n,int ar[]);
void shift(int n,int ar[],int index);
int main(){
    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array::"<<endl;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter the number to be deleted :: "<<endl;
    int num;
    cin>>num;
    for(int i=0;i<n;i++){
        if(ar[i]==num){
            shift(n,ar,i);
            n--;i--;
        }
    }
    print(n,ar);
}
void shift(int n,int ar[],int index){
    for(int i=index;i<n-1;i++){
        ar[i]=ar[i+1];
    }
}
void print(int n,int ar[]){
cout<<"New array elemets::"<<endl;
for(int i=0;i<n;i++){
    cout<<ar[i]<<endl;
}
}

