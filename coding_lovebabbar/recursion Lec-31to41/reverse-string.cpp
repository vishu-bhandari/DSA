#include<iostream>
using namespace std;


void reverse(string &str,int i,int j){

    cout<<"call received for"<<str<<endl<<endl;
    //base case 

    if(i>j){
        return ;
    }

    swap(str[i],str[j]);
    reverse(str,++i,--j);
}


int main(){
    
    string name="vishu";

    reverse(name,0,name.length()-1);
    
    cout<<name<<endl;


    return 0;
}