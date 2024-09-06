#include <iostream>
using namespace std;

string replaceSpaces(string str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

        }else{
            temp.push_back(str[i]);
        }
    }
    return temp;

}

int main()
{   

    string s;
    cout<<"input the String"<<endl;
    getline(cin,s);

    cout<<"the string you entered is "<<endl;
    cout<<s<<endl;

    cout<<replaceSpaces(s);


    return 0;
}