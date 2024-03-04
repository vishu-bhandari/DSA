#include<iostream> 
using namespace std;

class a{

    public:
    void sayhello(){
        cout<<"hello vishu bhandari"<<endl;
    }
    int  sayhello(char name){
        cout<<"hello bhandari"<<endl;
        return 1;
    }
    void sayhello(string name){
        cout<<"hello " <<name<<endl;
    }
};


int main(){

    a obj;
    obj.sayhello();
    string name= "vishu";
    obj.sayhello(name);

    return 0;
}