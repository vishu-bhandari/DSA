#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cout<<"enter the value of n"<<endl;

    cin>>n;
    int i=0;
    int ans=0;

    while(n!=0){
        int bit=n%10;
        if(bit==1){
            ans=ans+pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<"the number is "<<ans<<endl;


    return 0;
}