#include<iostream>
using namespace std;


int factorial(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;

    }
    return a;
}
int nCr(int n,int r){
    int num=factorial(n);
    int den=factorial(r)*factorial(n-r);

    int answer=num/den;
    return answer;
}



int main(){
    int n,r;
    cout<<"enter the value of n and r"<<endl;
    cin>>n>>r;


    int ans=nCr(n,r);
    cout<<ans<<endl;

    



    return 0;
}






























// #include<iostream>
// using namespace std;



// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }


// int nCr(int n,int r){
//     int num=factorial(n);
//     int den=factorial(r)*factorial(n-r);

//     int ans=num/den;
//     return ans;
// }

// int main(){
//     int n,r;
//     cout<<"enter the value of n and r "<<endl;

//     cin>>n>>r;
//     cout<<"the answer is"<<nCr(n,r);

// }