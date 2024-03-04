#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5
    };
    char ch[6]="abcde";
    
    cout<<arr<<endl;
    // ismai address print ho gaya 


    cout<<ch<<endl;
    // ismai jo string thi vo print ho gaye 

    char *c=&ch[0];
    // prints entire string and integer ke case mai vo sirf address print kr ra tha jo pointer refer kr ra hia 
    cout<<c<<endl;
    

    char temp='a';
    char *p=&temp;
    cout<<p<<endl;

    return 0;
}