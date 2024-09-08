#include<iostream>
using namespace std;

void update(int **p2){
    // p2=p2+1;
    //kuch change hoga? - NO 


    // *p2=*p2+1;
    // kuch change hogga? - yes


    **p2=**p2+1;
    // kuch chanhe hoga? - yes 
    
}

int main(){

    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<endl<<"sab sahi char raha hai"<<endl <<endl;

    cout<<"print p "<<p<<endl;
    cout<<" address of p "<<&p<<endl;
    cout<<"*P "<<*p<<endl;

    cout<<"*p2 " << *p2<<endl;

    cout<<endl;
    cout<<"i "<<i<<endl;
    cout<<"*p "<<*p<<endl;
    cout<<"**p2 :"<<**p2<<endl;

    cout<<endl;

    cout<<"&i:"<<&i<<endl;
    cout<<"p :"<<p<<endl;
    cout<<"*p2:"<<*p2<<endl;

    cout<<endl;

    cout<<"&p"<< &p<<endl;
    cout<<"p2" <<p2<<endl;

    cout<<endl<<endl;

    cout<<"before"<<i<<endl;
    cout<<"before"<<p<<endl;
    cout<<"before "<<p2<<endl;

    update(p2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    cout<<endl<<endl;


    return 0;
}