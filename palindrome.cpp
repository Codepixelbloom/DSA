#include <iostream>
using namespace std;
int main(void){
    int n1,n2,rev=0;
    cout<<"Enter the numbere to be checked for palindrome "<<endl;
    cin>>n1;
    n2=n1;
    while(n1>0){
        rev=rev*10 + n1%10;
        n1/=10;
    }
    if(n2==rev)
    cout<<rev<<" is a palindrome number"<<endl;
    else
    cout<<n2<<" is not a palindrome number"<<endl;

    return 0;
}