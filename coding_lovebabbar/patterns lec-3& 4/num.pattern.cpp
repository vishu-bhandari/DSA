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
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }



int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;

    int i=1,j;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }



    return 0;
}