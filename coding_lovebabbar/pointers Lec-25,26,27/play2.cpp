#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    int a = num;
    a++;

    cout << "value of num is :" << num << endl;
    cout << "value of a is : " << a << endl;

    int *p = &num;
    a = *p;
    a++;
    cout << "value of a is: " << a << endl;

    int *q = &num;
    cout << "before " << num << endl;
    (*q)++;
    cout << "after " << num << endl;

    int *r = p;
    cout << p << " " << r << endl;
    cout << *p << " " << *r << endl;

    // important concept
    int i = 3;
    int *t = &i;
    cout << "the value of t is " << (*t)++ << endl;
    *t = *t + 1;
    cout<<"value of *t is "<<*t<<endl;
    cout << "before t" << t << endl;
    t = t + 1;
    cout << "after t" << t << endl;

    return 0;
}