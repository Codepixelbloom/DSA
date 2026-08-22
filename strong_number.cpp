#include <iostream>
using namespace std;
int main(void){
    int n,m,sum=0,fact=1;
    cout<<"Enter the number to be checked strong number"<<endl;
    cin>>n;
    m=n;
    while(n>0){
        int d=n%10;
        for(int i=1;i<=d;i++){
        fact*=i;
        }
        sum+=fact;
        fact=1;
        n/=10;
    }
    if(sum==m)
    cout<<m<<" is a strong number"<<endl;
    else
    cout<<m<<" is not a strong number"<<endl;
    return 0;
}