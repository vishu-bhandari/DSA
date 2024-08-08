#include <iostream>
using namespace std;

int main()
{

    // int a;
    // cin>>a;
    // // cout<<"the value of n is:"<<n<<endl;

    // if(a>0){
    //     cout<<"a is positive "<<endl;
    // }
    // else{
    //     cout<<"a is negative "<<endl;
    // }

    //     int a,b;
    //     // cin>>a>>b;

    //     // cout<<"the value of a and b is "<<a << " "<< b <<endl;

    //     a=cin.get();

    //     cout<<"the value of a is "<<a<<endl;

    // int a, b;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"enter the value of b "<<endl;
    // cin>>b;

    // if(a>b){
    //     cout<<"a is greater than b  "<<endl;

    // }
    // if(b>a){
    //     cout<<"b is greater than a"<<endl;
    // }

    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"a is positive ";
    // }
    // else if(a<0){
    //     cout<<"a is neagative";
    // }
    // else{
    //     cout<<"a is zero";
    // }

    //    int a;
    //    cout<<"enter the value of a:" <<endl;
    //    cin>>a;

    //    if(a>0){
    //     cout<<"the value of a is: "<<a <<" and a is positive"<<endl;
    //    }else{
    //     cout<<"a is a negative number";
    //    }

    //    int a,b;
    //    cin>>a>>b;
    //    if(a>b){
    //     cout<<"a is greated than b"<<endl;

    //    }else{
    //     cout<<"b is greater than a "<<endl;
    //    }

    // int a,b;
    // a=cin.get();

    // cout<<"value of a is "<<a<<endl;

    // int a;
    // cout<<"enter the value of a:"<<endl;
    // cin>>a;

    // if(a>0){
    //     cout<<"a is bigger than 0"<<endl;
    // }else if(a<0){
    //     cout<<"a is less than 0"<<endl;
    // }
    // else if(a.isNan()){
    //     cout<<"a is not a number "<<endl;
    // }
    // else{
    //     cout<<"a is zero"<<endl;
    // }

    // while loop
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        cout << i << " ";
        cout << i << endl;
        i = i + 1;
    }

    int m;
    cout << "enter the value of m for sum: " << endl;
    cin >> m;

    int sum = 0;
    int j = 1;
    while (j <= m)
    {
        sum = sum + j;
        j = j + 1;
    }
    cout << "value of sum is " << sum << endl;

    int input, first, last;
    cout << "enter the input , first and last  " << endl;
    cin >> input >> first >> last;
    int Sum=input/2*(first+last);
    cout<<"the value of sum is "<<Sum <<endl;

    return 0;
}