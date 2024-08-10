#include<iostream>
using namespace std;
#include<math.h>


int main(){
   int n;
   cout<<"enter the value of n"<<endl;
   cin>>n;

    int answer=0;
    int i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     answer=(bit * pow(10,i))+ answer;
    //     n=n>>1;
    //     i++;
    // }
    // while(n!=0){
    //     int digit=n%10;
    //     answer=pow(10,i)*digit +answer;
    //     i++;
    //     n=n/10;
    // }

    while(n!=0){
        int digit=n%10;
        answer=(answer*10) + digit;
        n=n/10;
        
    }
    cout<<"answer is "<<answer<<endl;


    return 0;
}