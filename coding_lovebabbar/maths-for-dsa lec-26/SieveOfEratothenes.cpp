#include<iostream>
using namespace std;
#include<vector>



int countPrime(int n){

    vector<bool> prime(n+1,true);
    int count=0;
    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;

            for(int j=i*2;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    return count;


}


int main(){

    vector<int> ans;
    
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;


    ans.push_back(countPrime(n));
    
    cout<<ans;
    return 0;
}