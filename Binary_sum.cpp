#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter the binary numbers :: "<<endl;
    string a,b;
    cin>>a;
    cin>>b;
    while(a.size()!=b.size()){
            if(a.size()>b.size()) a="0"+a;
            else b="0"+b;
        }
        string res="";int carry=0,sum=0;
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]=='0'){
                if(b[i]=='0'){
                    if(carry==0){sum=0;carry=0;}
                    else{sum=1;carry=0;}
                }
                else {
                    if(carry==0){sum=1;carry=0;}
                    else{sum=0;carry=1;}    
                }
            }
            else
            {
                if(b[i]=='0'){
                    if(carry==0){sum=1;carry=0;}
                    else{sum=0;carry=1;}
                }
                else {
                    if(carry==0){sum=0;carry=1;}
                    else{sum=1;carry=1;}
                }
            }
            cout<<sum<<" "<<carry<<endl;
        }
        if(carry==1)res=res=std::to_string(carry)+res;
        cout<<"Sum :: "<<res<<endl;
}