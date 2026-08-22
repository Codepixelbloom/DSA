#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows and columns of matrix::"<<endl;
    cin>>m;
    cin>>n;
    int mat[m][n];
    cout<<"Enter the elements of the matrix:: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Spiral matrix::"<<endl;
    int top=0,bottom=m-1,left=0,right=n-1,count=0;
    while(count<m*n){
        for(int i=left;i<=right && count<m*n;i++){
            cout<<mat[top][i]<<" ";
            count++;
        }
        top++;
        for(int i=top;i<=bottom && count<m*n;i++){
            cout<<mat[i][right]<<" ";
            count++;
        }
        right--;
        for(int i=right;i>=left && count<m*n;i--){
            cout<<mat[bottom][i]<<" ";
            count++;
        }
        bottom--;
        for(int i=bottom;i>=top && count<m*n;i--){
            cout<<mat[i][left]<<" ";
            count++;
        }
        left++;
    }
}