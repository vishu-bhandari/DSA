#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    n=-n;
    int ans=0;
    int i=0;
    int ans1;
    while(n!=0){
        int bit=n &1;
        ans=(bit*pow(10,i))+ans;
        
        n=n>>1;
        i++;
        
        ans1=~ans;
        ans1=ans+1;
        ans1=-ans;
    }
    cout<<"answer is "<<ans1<<endl;
}