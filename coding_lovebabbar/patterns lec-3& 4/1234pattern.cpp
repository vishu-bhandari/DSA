#include<iostream>
using namespace std;

// int main(){


//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }

// }





int main(){

    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}