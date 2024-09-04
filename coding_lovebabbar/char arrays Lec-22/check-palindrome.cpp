#include<iostream>
using namespace std;


bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char ch[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        swap(ch[s++],ch[e--]);
    }

}


int StringLen(char ch[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(ch[i]=='\0'){
            return count;
        }else{
            count++;
        }
    }
    return count;
  
}

void printArray(char ch[],int n){
    for(int i=0;i<n;i++){
        cout<<ch[i];
    }
}

int main(){


    char ch[20];

    cout<<"Enter the string"<<endl;
    cin>>ch;


    int answer=StringLen(ch,20);
    cout<<answer<<endl;

    cout<<"The reversed String is "<<endl;
    reverse(ch,answer);

    printArray(ch,answer);
    cout<<endl;


    bool palinornot=checkPalindrome(ch,answer);
    if(palinornot){
        cout<<"its a palindrome"<<endl;
    }else{
        cout<<"oops: not a palindrome";
    }
    
    return 0;
}