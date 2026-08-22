#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array:: "<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array:: "<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[i]){
                ar[j]=ar[i]+ar[j];
                ar[i]=ar[j]-ar[i];
                ar[j]=ar[j]-ar[i];
            }
        }
    }
    int num;
    cout<<"Enter the number to be found:: "<<endl;
    cin>>num;
    int mid=n/2, first=0,last=n-1;
    while(first<=last){
        if(ar[mid]==num){
            cout<<"Number "<<num<<" is found in the list: at : "<<mid<<endl;
            return 0;
        }
        else if(ar[mid]>num){
            last=mid-1;
        }
        else if(ar[mid]<num){
            first=mid+1;
        }
        mid=last + (last-first)/2;
    }
    cout<<"Number "<<num<<" not found in the list"<<mid;
}