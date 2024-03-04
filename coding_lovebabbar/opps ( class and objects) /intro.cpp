#include <iostream>
// #include "hero.cpp"
using namespace std;

class hero
{

    // properties
    int health;

public:
    char *name;
    char level;
    static int timetocomplete;

    void print()
    {
        cout << endl;
        cout << "name: " << this->name << endl;
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    hero()
    {
        cout << "simple constructor called" << endl;
        name = new char[100];
    }

    // parametrised constructor
    hero(int health)
    {
        cout << "this " << this << endl;
        this->health = health;
    }
    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    hero(hero &temp)
    {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    static int random(){
        return timetocomplete;
    }
    // destructor called
    ~hero()
    {
        cout << "destructor called" <<endl;;
    }
};

// intialise static outside the class 
int hero::timetocomplete=5;


int main()
{
    cout<<hero::timetocomplete<<endl;
    cout<<hero::random()<<endl;

    hero vishu;
    cout<<vishu.timetocomplete<<endl;

    hero vish;
    vish.timetocomplete=10;
    cout<<vishu.timetocomplete<<endl;
    cout<<vish.timetocomplete<<endl;






    // // static
    // hero vishu;

    // // dynamic
    // hero *vish=new hero();
    // // manually destructor called
    // delete vish;

    // hero vishu1;
    // vishu1.setHealth(12);
    // vishu1.setLevel('D');
    // char name[7]="babbar";
    // vishu1.setName(name);

    // // vishu1.print();

    // // use default copy constructor
    // hero vishu2(vishu1);
    // // vishu2.print();

    // vishu1.name[0]='T';
    // vishu1.print();

    // vishu2.print();

    // vishu1=vishu2;
    // vishu1.print();
    // vishu2.print();

    // hero vishu(70, 'c');
    // vishu.print();

    // // copy constructor called
    // hero bhandari(vishu);
    // bhandari.print();

    // // object created statically
    // hero vishu(10);
    // cout<<"address of vishu "<<&vishu<<endl;
    // vishu.getHealth();
    // vishu.print();

    // // dynamically
    // hero *vish = new hero(11);
    // vish->print();

    // hero temp(22,'b');
    // temp.print();

    // static allocation
    // hero vishu;
    // vishu.setHealth(300);
    // vishu.setLevel('V');

    // cout << "level is " << vishu.level << endl;
    // cout << "health is " << vishu.getHealth() << endl;

    // // dynamically
    // hero *vish = new hero;
    // vish->setLevel('A');
    // vish->setHealth(100);
    // cout << "level is " << (*vish).level << endl;
    // cout << "health is " << (*vish).getHealth() << endl;

    // cout << "level is " << vish->level << endl;
    // cout << "health is " << vish->getHealth() << endl;

    // // creation of object
    // hero vishu;

    // cout<<"size of vishu is :"<<sizeof(vishu)<<endl;

    // // getting heath using gethealth
    // cout<<"vishu health is "<<vishu.getHealth()<<endl;

    // // setting health using set health
    // vishu.setHealth(200);

    // // vishu.health=100;
    // vishu.level='A';

    // cout<<"health is: "<<vishu.getHealth()<<endl;
    // cout<<"level is: "<<vishu.level<<endl;

    return 0;
}