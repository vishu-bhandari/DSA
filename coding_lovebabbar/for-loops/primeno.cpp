#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "It is not a prime number" << endl;
            break;
        }
        else
        {
            cout << "it is a prime number " << endl;
            break;
        }
    }
}

// int main(){
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<n<<" is not prime "<<endl;
//             break;

//         }
//         else{
//             cout<<n<<" is prime "<<endl;
//             break;
//         }
//     }
// }