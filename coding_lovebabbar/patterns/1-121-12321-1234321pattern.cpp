//         1
//     1   2   1   
// 1   2   3   2   1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        // print space 
        int space = n-i;
        while(space ){
            cout<<" ";
            space= space -1;

        }
        // print 1st triangle 
        int j=1;
        while(j<=i){
            cout<<j;
            j++;

        }
        int start=i-1;
        while(start){
            cout<<start;
            start--;

        }
        cout<<endl;
        i++;
    }
}