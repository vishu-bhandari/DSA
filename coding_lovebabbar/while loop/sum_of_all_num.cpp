#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   cout<<"the value of n is "<<n<<endl;
   int i=1, sum=0;
   while(i<=n){
    sum=sum+i;
    i++;
   }
   cout<<"the sum form 1 to "<<n<< "is "<<sum<<endl;

    
}