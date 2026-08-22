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
    int mat1[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat1[j][m-i-1]=mat[i][j];
        }
    }
    
    cout<<"Rotated matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
}