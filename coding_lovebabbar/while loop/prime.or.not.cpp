#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"n is not prime "<<i<<endl;
//             break;
//         }
//         else{
//             cout<<"n is prime "<<i<<endl;
//             break;
//         }
//         i=i++;
//     }
    
// }




int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=2;
    while(i<n){
        if(n%i == 0){
            cout<<"n is not a prime number"<<endl;
            break;
        }else{
            cout<<"n is a prime number"<<endl;
            break;
        }
        i++;
    }


    return 0;
}