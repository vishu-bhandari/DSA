#include<iostream>
using namespace std;


bool evenOdd(int a){
    if(a%2==0){
        return 1;

    }
    else{
        return 0;
    }

}
int main(){
    int num;
    cout<<"enter num"<<endl;
    cin>>num;

    if(evenOdd(num)){
        cout<<"the number is even"<<endl;

    }
    else{
        cout<<"num is odd ";
    }

    return 0;
}