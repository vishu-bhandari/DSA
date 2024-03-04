#include<iostream>
using namespace std;

int main(){

    int amount;
    cout<<"enter the value of amount "<<endl;
    cin>>amount;

    int a,b,c,d,e;

    switch(1){
        case 1:a=amount/100;
        amount=amount%100;
        cout<<"the no . of 100 ruppe notes are "<<a<<endl;

        case 2:b=amount/50;
        amount=amount%50;
        cout<<"the no . of 50 ruppe notes are "<<b<<endl;

        case 3:c=amount/20;
        amount=amount%20;
        cout<<"the no . of 20 ruppe notes are "<<c<<endl;

        case 4:d=amount/10;
        amount=amount%10;
        cout<<"the no . of 10 ruppe notes are "<<d<<endl;

        case 5:e=amount/1;
        amount=amount%1;
        cout<<"the no . of 1 rupee notes are "<<e<<endl;

    }
    
    return 0;

}