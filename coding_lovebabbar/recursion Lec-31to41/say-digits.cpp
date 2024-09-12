#include <iostream>
using namespace std;

void sayDigits(string arr[], int n)
{   
    int ans=0;

    //base case 
    if(n<10){
        cout<<arr[n]<<" ";
        return ;
    }

    sayDigits(arr,n/10);


    ans=n%10;
    cout<<arr[ans]<<" ";
}

int main()
{

    string arr[10] = {"zero",
                      "one",
                      "two",
                      "three",
                      "four",
                      "five",
                      "six",
                      "seven",
                      "eight",
                      "nine"};

    int n;
    cout << "enter the number " << endl;
    cin >> n;

    sayDigits(arr, n);

    return 0;
}