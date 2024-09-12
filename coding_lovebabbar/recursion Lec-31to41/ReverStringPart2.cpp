#include<iostream>
using namespace std;

void reverse(string &s,int i){
    if(i>s.length()-i-1){
        return;
    }

    swap(s[i],s[s.length()-i-1]);
    reverse(s,++i);
}

int main(){

    string s="vishu";

    reverse(s,0);
    
    cout<<s<<endl;


    return 0;
}