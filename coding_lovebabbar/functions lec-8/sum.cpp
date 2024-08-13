#include<iostream>
using namespace std;

int sum(int n){
    int sum=0;
    for(int i=0;i<=1000;i++){
        sum=sum+i;
    }
    return sum;
}


int main(){

    
    int sums=sum(1000);
    cout<<sums<<endl;
}