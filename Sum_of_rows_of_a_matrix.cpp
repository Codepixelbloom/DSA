#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number for rows"<<endl;
    cin>>m;
    cout<<"Enter the number of columns"<<endl;
    cin>>n;
    int matrix[m][n],sum=0;
    cout<<"Enter the elements of the matrix"<<endl;
    for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            cin>>matrix[r][c];
        }
    }
    for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            sum+=matrix[r][c];
        }

        cout<<"Sum of elements of row :: "<<r+1<<":: "<<sum<<endl;
        sum=0;
    }
}