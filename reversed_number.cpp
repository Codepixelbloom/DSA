#include <iostream>
using namespace std;
int main(void){
    int n,num=0;
    cout<<"Enter a number to be reversed"<<endl;
    cin>>n;
    while(n>0){
        num=num*10 + n%10;
        n/=10;
    }
    cout<<"Reversed number :  "<<num<<endl;
    return 0;
}