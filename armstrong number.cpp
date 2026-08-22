#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int n,m,count=0,sum=0;
    cout<<"Enter the number to be checked armstrong "<<endl;
    cin>>n;
    m=n;
    while(n>0){
        n/=10;
        count++;
    }
    n=m;
    while(n>0){
        sum+=round(pow(n%10,count));
        n/=10;
    }
    if(sum==m)
    cout<<sum<<" is an armstrong number"<<endl;
    else
    cout<<m<<" is not an armstrong number"<< endl;
    return 0;
}