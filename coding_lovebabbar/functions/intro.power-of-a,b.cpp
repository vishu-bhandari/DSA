#include<iostream>
using namespace std;


int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}

int main(){

    //pow(a,b)
    int a,b;
    cin>>a>>b;

   

    int ans= power(a,b);
    cout<<"answer is: "<<ans<<endl;



    return 0;
}