#include <iostream>
#include <string>
using namespace std;

int main(void) {
        cout<<"Enter the Roman numeral: ";
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.length();){
            if(s[i]=='M' || s[i+1]=='M'){
                if(s[i]=='M'){sum+=1000;i++;continue;}
                else {sum+=900;i+=2;}
            }
            else if(s[i]=='D'|| s[i+1]=='D'){
                if(s[i]=='D'){sum+=500;i++;continue;}
                else {sum+=400;i+=2;}
            }
            else if(s[i]=='C' || s[i+1]=='C'){
                if(s[i]=='C'){sum+=100;i++;continue;}
                else {sum+=90;i+=2;}
            }
            else if(s[i]=='L'|| s[i+1]=='L'){
                if(s[i]=='L'){sum+=50;i++;continue;}
                else {sum+=40;i+=2;}
            }
            else if(s[i]=='X' || s[i+1]=='X'){
                if(s[i]=='X'){sum+=10;i++;continue;}
                else {sum+=9;i+=2;}
            }
            else if(s[i]=='V' || s[i+1]=='V'){
                if(s[i]=='V'){sum+=5;i++;continue;}
                else {sum+=4;i+=2;}
            }
            else{sum+=1;i++;}
        }
        cout<< sum<<endl;
    }
