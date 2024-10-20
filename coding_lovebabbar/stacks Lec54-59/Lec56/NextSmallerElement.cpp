#include<iostream>
using namespace std;
#include<stack>
#include<vector>

int main(){


    int arr[4]={2,1,4,3};
    vector<int> ans(4);
    stack<int> s;
   
    s.push(-1);

    for(int i=4-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()>= curr){
            s.pop();
        }

        //ans is stack ka top 
        ans[i]=s.top();
        s.push(curr);

    }

    for(int i =0;i<4;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}