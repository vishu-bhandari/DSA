// 1
// 21
// 321
// 4321

#include <iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int cnt=i;
        int j=1;
        while(j<=i){
            cout<<cnt;
            cnt--;
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
//     cout<<"enter the value of n "<<endl;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }