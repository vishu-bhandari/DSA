// conver fahrenheit To Celsius

#include <iostream>
using namespace std;

int main()
{

    int f;
    cout << "Enter the value of fahrenheit" << endl;
    cin >> f;

    int c = f - 32;

    cout << "value of c is " << c << endl;
    float celsius = (5.0 / 9) * c;
    cout << celsius;

    return 0;
}