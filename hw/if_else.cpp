// print which char is upper or lower case 
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the value of ch"<<endl;
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        cout<<"this is upper case";
    }
    else if(ch>='a'&& ch<='z'){
        cout<<"this is lower case ";
            }
    else if(ch>='0'&& ch<='9'){
        cout<<"this is numeric";

    }   
    else{
        cout<<"please try again";
    }     
}