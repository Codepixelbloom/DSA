#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number for rows"<<endl;
    cin>>m;
    cout<<"Enter the number of columns"<<endl;
    cin>>n;
    int matrix[m][n];
    cout<<"Enter the elements of the matrix"<<endl;
    for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            cin>>matrix[r][c];
        }
    }
    cout<<"Matrix:"<<endl;
    for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            cout<<matrix[r][c]<<" ";
        }
        cout<<endl;
    }
}