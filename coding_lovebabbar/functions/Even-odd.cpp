#include<iostream>
using namespace std;

bool evenOdd(int n){

    if(n%2==0){
        return true;
    }else{
        return false;
    }
}



int main(){ 
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    if(evenOdd(n)){
        cout<<"the number is even"<<endl;
    }else{
        cout<<"the number is odd"<<endl;
    }




    return 0;
}































// #include<iostream>
// using namespace std;




// bool evenOdd(int a){
//     if(a%2==0){
//         return 1;

//     }
//     else{
//         return 0;
//     }

// }
// int main(){
//     int num;
//     cout<<"enter num"<<endl;
//     cin>>num;

//     if(evenOdd(num)){
//         cout<<"the number is even"<<endl;

//     }
//     else{
//         cout<<"num is odd ";
//     }

//     return 0;
// }