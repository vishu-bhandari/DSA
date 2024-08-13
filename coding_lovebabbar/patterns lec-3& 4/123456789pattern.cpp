// 123
// 456
// 789
#include<iostream>
using namespace std;


// int main(){

//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;

//     int i,j;
//     int cnt=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<cnt;
//             cnt++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }




int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1 , count=0;
    while(i<=n){
        int j=1;
        while(j<=n){
            count=count+1;
            cout<<count;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
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