#include <iostream>
using namespace std;


int score=15;

void a(int &i)
{
    cout<<score++<< " in a"<<endl;
    cout << i << endl;
    // b(i);
}
void b(int &i)
{
    cout<<score<< " in b"<<endl;
    cout << i << endl;
}

int main()
{
     cout<<score++<< " in main"<<endl;
    int i = 5;
    a(i);
    b(i);

    // example for local variable
    // {int i=2;
    // cout<<i<<endl;
    // }
    // cout<<i<<endl;

    return 0;
}