#include <iostream>
using namespace std;
int main(void){
    int n,m,sum=0,pro=1;
    cout<<"Enter the number to checked for spy number"<<endl;
    cin>>n;
    m=n;
    while(n>0){
        sum+=n%10;
        pro*=n%10;
        n/=10;
    }
    if(sum==pro)
    cout<<m<<" is a spy number "<<endl;
    else
    cout<<m<<" is not a spy number"<<endl; 
    return 0;
}