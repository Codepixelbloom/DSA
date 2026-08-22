#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    int n, sum = 0, m,o;
    cout << "Enter the number to be checked for happy number" << endl;
    cin >> n;
    m=o=n;
    do{
        while(n>0){
            sum+=round(pow(n%10,2));
            n/=10;
        }
        n=m=sum;
        sum=0;
    }
    while(n>9);
    if(n==1){
        cout << o << " is a happy number" << endl;
    }
    else{
        cout << o << " is not a happy number" << endl;
    }
    return 0;
}