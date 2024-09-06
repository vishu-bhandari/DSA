#include <iostream>
using namespace std;

string RemoveDuplicates(string s){
    string result="";
    for(int i=0;i<s.length();i++){
        if(result.empty() ||  result.back() !=s[i]){
            result.push_back(s[i]);
        }else{
            result.pop_back();
        }
    }
    return result;
}



int main()
{

    cout<<"Enter the string "<<endl;

    string s;
    cin>>s;

    cout<<"Remove duplicates : " << RemoveDuplicates(s)<<endl;

    return 0;
}