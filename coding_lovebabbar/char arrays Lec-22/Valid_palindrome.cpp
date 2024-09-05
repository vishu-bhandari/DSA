#include <iostream>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }else{
        char temp=ch - 'A' +'a';
        return temp;
    }
}

bool checkPalindrome(string a){
    int s=0;
    int e=a.length()-1;

    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{

    string s;
    cout << "enter the string" << endl;
    cin >> s;
    cout << "The String you entered is " << endl;
    cout << s << endl;

    string temp = "";

    for (int j = 0; j < s.length(); j++)
    {
        if (isValid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // to lower case
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }


    if(checkPalindrome(temp)){
        cout<<"palindrome true "<<endl;
    }else{
        cout<<"hehe nhi hai"<<endl;
    }

    

    return 0;
}