#include <iostream>
using namespace std;

int StringLen(char ch[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(ch[i]=='\0'){
            return count;
        }else{
            count++;
        }
    }
    return count;
  
}

int main()
{

    char ch[20];

    cout << "enter the string " << endl;

    cin >> ch;

    int answer=StringLen(ch,20);
    cout<<answer<<endl;

    return 0;
}