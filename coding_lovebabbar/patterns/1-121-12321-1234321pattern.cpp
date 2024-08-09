//         1
//     1   2   1   
// 1   2   3   2   1

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=i;
        while(j<n){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<k<<" ";
            k++;
        }
        int count=i-1;
        while(count){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
        i++;
    }



    return 0;
}

















// int main(){
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         // print space 
//         int space = n-i;
//         while(space ){
//             cout<<" ";
//             space= space -1;

//         }
//         // print 1st triangle 
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j++;

//         }
//         int start=i-1;
//         while(start){
//             cout<<start;
//             start--;

//         }
//         cout<<endl;
//         i++;
//     }
// }