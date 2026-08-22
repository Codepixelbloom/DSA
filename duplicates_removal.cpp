#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-count;j++){
                if(nums[i]==nums[j]){
                    count++;
                    for(int k=j;k<n-1;k++){
                        nums[k]=nums[k+1];
                    }
                    j--;
                }
            }
        }
        cout<<"The array after removing duplicates is: "<<endl;
        for(int i=0;i<n-count;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
     }