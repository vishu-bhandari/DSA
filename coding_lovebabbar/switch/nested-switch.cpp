#include<iostream>
using namespace std;


int main(){

    int num=1;
    int ch='1';
    cout<<endl;

    switch(ch){
        case 1:
        cout<<"this is a num 1"<<endl;
        break;
        case '1':
            switch (num)
            {
            case 1:
                cout<<"this is the nested switch 1"<<endl;
                break;
            
            default:
            cout<<"this is the default switch";
                break;
            }
    }



    return 0;
}










// #include<iostream>
// using namespace std;


// int main(){
//     char ch='1';
//     int num=1;
//     cout<<endl;
//     switch(ch){
//         case 1:cout<<"first"<<endl;
//             break;
//         case '1':switch (num){
//                     case 1:cout<<"the value of num is "<<num<<endl; 
//                             }
//             break;
//         default: cout<<"it is a default case "<<endl;
//     }
//     cout<<endl;
// }