#include <iostream>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the desired number"<<endl;
    cin>>n;
    int max,min;
    max=min=n%10;
    while(n>0){
        int d=n%10;
        n/=10;
        if(d>max)
        max=d;
        if(d<min)
        min=d;
    }
    cout<<"Largest digit = "<<max<<endl;
    cout<<"Smallest digit = "<<min<<endl;
}