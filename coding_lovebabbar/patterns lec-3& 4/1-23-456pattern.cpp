// 1
// 23
// 456




#include<iostream>
using namespace std;

int main(){ 

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    int cnt=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<cnt;
            cnt++;
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
//       int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;

//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
