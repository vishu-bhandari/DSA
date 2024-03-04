#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};

class Dog: public Animal{

};

class GermanShepher:public Dog{

};

int main(){

    GermanShepher g;
    g.speak();
    cout<<g.age<<endl;
    cout<<g.weight<<endl;

    return 0;
}