// 123
// 456
// 789
#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i,j;
    int cnt=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<cnt;
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }
}























// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;

//     int i=1;
//     int count=1;
//     while(i<=n){

//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }