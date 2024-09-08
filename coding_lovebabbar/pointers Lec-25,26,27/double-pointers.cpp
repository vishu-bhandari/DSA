#include <iostream>
using namespace std;

void update(int **p)
{
    // p2 = p2 + 1;

    // kuch change hogga?? -> no change 

    // *p = *p + 1;
    // kuch change hogga??

    **p = **p + 1;
    // kuch change hoga??


}

int main()
{

    int i = 5;
    int *p = &i;

    int **p2 = &p;

    cout << endl
         << "sab sahi chal raha hai bhia " << endl
         << endl;

    cout << "the address of p is " << p << endl;    // ye hai ki p mai kya pda hai
    cout << "the value inside p is " << &p << endl; // ye hai address of p

    cout << "*p2 value " << *p2 << endl; // p ke andr jo value pdi hai vohi print hogga
    cout << "**p2 value " << **p2 << endl;

    cout << "value of i " << i << endl;
    cout << "value of i with *p " << *p << endl;
    cout << "value of i with **p2 " << **p2 << endl;

    cout << "value of p with i " << &i << endl;
    cout << "value of p with p " << p << endl;
    cout << "value of p with p2 " << *p2 << endl;

    cout << "& p " << &p << endl;
    cout << " p2 " << p2 << endl;

    cout<<"------------------------"<<endl;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;

    update(p2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    return 0;
}