// 1
// 23
// 345
// 4567

#include <iostream>
using namespace std;

// int main(){

//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1,cnt=i;
//         while(j<=i){
//             cout<<cnt;
//             cnt++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int i = 1, count = 0;
    while (i <= n)
    {
        int j = 1;
        count = i;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
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
//     while(i<=n){
//     int count=i;
//         int j=1;
//         while(j<=i){
//             cout<<count;
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }