#include<iostream>
using namespace std;

int main(){

    char ch='a';
    cout<<"The ch is:- "<<ch <<endl;
    switch(ch){

        case 1:cout<<"first"<<endl;
        break;

        case 'a':cout<<"second"<<endl;
        cout<<"this is a character ";
        break;

        default:cout<<"It is default case";
        break;

    }



    return 0;
}