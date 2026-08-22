#include <iostream>
using namespace std;
int main(void){
    int n,count=0;
    cout<<"Enter the desired number"<<endl;
    cin>>n;
    while(n>0)
    {
        n/=10;
        count++;
    }
    cout<<"The number of digits in the number "<<count <<endl;
}