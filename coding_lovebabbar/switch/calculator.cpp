
#include<iostream>
using namespace std;


int main(){
        int a,b;
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;

        //operation
        char opr;
        cout<<"enter the arithmetic operation"<<endl;
        cin>>opr;

        switch (opr)
        {
        case '*':
               cout<<"value of a*b is "<<a*b<<endl;
                break;
        case '+':
               cout<<"value of a+b is "<<a+b<<endl;
                break;
        case '-':
               cout<<"value of a-b is "<<a-b<<endl;
                break;
        case '/':
               cout<<"value of a/b is "<<a/b<<endl;
                break;
        case '%':
               cout<<"value of a%b is "<<a%b<<endl;
                break;
        default:
        cout<<"this is the default case"<<endl;
        break;
        
        }


        return 0;
}



























// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter the value of a"<<endl;
//     cin>>a;
//     cout<<"enter the value of b"<<endl;
//     cin>>b;

//     char op;
//     cout<<"enter the operation "<<endl;
//     cin>>op;
//     cout<<endl;

//     switch(op){
//         case '*':cout<<"the value of a*b is "<<a*b<<endl;
//                 break;
//         case '+':cout<<a+b<<endl;
//                 break;
//         case '%':cout<<a%b<<endl;
//                 break;
//         case '-':cout<<a-b<<endl; 
//                 break;

//         default:cout<<"enter a valid operation"<<endl;
//                 break;

//     }
    




//     return 0;
// }