#include<iostream>
using namespace std;
#include<vector>

void solve(string str,string &output,int index,vector<string> &ans,string mapping[]){
    //base case

    if(index==str.length()){
        ans.push_back(output);
        return;
    };

    int number=str[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(str,output,index+1,ans,mapping);
        output.pop_back();
    }

}

int main(){

    string str="23";

    vector<string> ans;
    int index=0;
    string output="";
    string mapping[10]={"" , "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    solve(str,output,index,ans,mapping);

   for (const string &i : ans)
    {
        cout << "\"" << i << "\" ";
    }
    return 0;
}