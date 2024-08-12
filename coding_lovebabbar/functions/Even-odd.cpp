#include<iostream>
using namespace std;

//1 - even 
//0 - odd 
bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}

int main(){
    int num;
    cin>>num;

    bool even=isEven(num);
    if(even){
        cout<<"number is even"<<endl;
    }else{
        cout<<"number is odd"<<endl;
    }

    return 0;
}