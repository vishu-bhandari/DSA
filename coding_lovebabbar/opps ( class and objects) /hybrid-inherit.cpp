#include <iostream>
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "inside class A" << endl;
    }
};

class B : public virtual A
{
public:
    void funcB()
    {
        cout << "inside class B" << endl;
    }
};

class C :  public virtual  A, public B
{
public:
    void funcC()
    {
        cout << "inside class C" << endl;
    }
};

int main()
{

    A obj1;
    obj1.funcA();

    B obj2;
    obj2.funcA();
    obj2.funcB();

    C obj3;
    obj3.funcA();
    obj3.funcB();
    obj3.funcC();


    return 0;
}