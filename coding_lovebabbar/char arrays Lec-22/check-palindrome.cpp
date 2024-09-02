#include<iostream>
using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPlaindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(tolowercase(a[s])!=tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter the name:"<<endl;
    cin>>name;

    int len=getlength(name);
    cout<<"the length is "<<len<<endl;

    cout<<"palindrome or not :"<<checkPlaindrome(name,len)<<endl;

    cout<<"character is "<<tolowercase('b')<<endl;
    cout<<"characteris "<<tolowercase('C')<<endl;


    return 0;
}