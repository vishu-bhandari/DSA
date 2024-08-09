// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     int i=0;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;

//     while(i<n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// }


// #include<iostream>
// using namespace std;

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
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n"<<endl;

    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i++;
    }

    return 0;
}