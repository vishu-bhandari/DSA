#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> n(5,100);

    list<int> m(n);

    cout<<"thats m for you"<<endl;
    for(int i:m){
    cout<<i<<" ";
    }cout<<endl;
    
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout<<"after erase ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list "<<l.size()<<endl;
}