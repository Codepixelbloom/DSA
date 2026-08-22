#include <iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    cout<<"Enter the number of times to shift: "<<endl;
    cin>>count;
    cout<<"Shifting"<<count<<" position to the right: "<<endl;
    for(int j=0;j<count%n;j++){
    int l=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=l;
    cout<<endl;
    cout<<"Array after shifting "<<j+1<<" position: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
return 0;
}