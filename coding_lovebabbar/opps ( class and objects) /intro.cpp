#include <iostream>
#include "hero.cpp"
using namespace std;

class Hero
{
    // properties

private:
    int health;

public:
    char *name;
    char level;

    // default  constructor
    Hero()
    {
        cout << "Default Constructor called" << endl;
        name = new char[100];
    }

    // parametrised constructor
    Hero(int health)
    {
        this->health = health;

        cout << "this->health " << this->health << endl;
        cout << "this " << this << endl;
        cout << "&health " << &health << endl;
    }

    Hero(int health, char level)
    {
        this->level = level;

        this->health = health;
    }

    // copy constructor
    Hero(Hero &temp)

    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "Name is :" << this->name << " , ";
        cout << "health is:" << this->health << " , ";
        cout << "level is:" << this->level << " , ";
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

    //Destructor 
    ~Hero(){
        cout<<"destructor called ho chukka hia mast "<<endl;
    }
};

int main()

{
    //static
    Hero a;

    Hero *b=new Hero;














    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "babbar";
    // hero1.setName(name);

    // hero1.print();

    // // use the default copy constructor

    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'T';
    // hero1.setHealth(13);
    // hero1.print();

    // hero2.print();

    // hero1=hero2;
    // hero1.print();
    // hero2.print();

    // Hero suresh(70, 'c');
    // // suresh.setHealth(90);
    // // suresh.setLevel('C');
    // suresh.print();

    // Hero R(suresh);
    // R.print();

    // Hero Vi(R);
    // Vi.print();

    // object created statically

    // Hero vishu(10);
    // cout << "address of vishu" << &vishu << endl;
    // vishu.getHealth();
    // vishu.print();

    // Hero *h = new Hero(11);

    // h->print();

    // Hero temp(22,'B');
    // temp.print();

    // creation of object
    // Hero h1;
    // Hero vishu;
    // hero h2;

    // cout << "size: " << sizeof(h1) << endl;
    // cout << "size of ch:" << sizeof(h1) << endl;

    // cout << "size of " << sizeof(h2) << endl;

    // cout<<"vishu ki health kitni hai "<<vishu.getHealth()<<endl;
    // //use setter
    // vishu.setHealth(70);
    // // vishu.health=80;
    // vishu.level='A';
    // //accessing the properties [ use dot operator ]

    // cout<<"health is :"<<vishu.getHealth()<<endl;
    // cout<<"level is : "<<vishu.level<<endl;

    // cout <<"size of vishu is "<<sizeof(vishu)<<endl;

    // static allocation
    //  Hero a;

    // cout<<"level is "<<a.level<<endl;
    // cout<<"health is private "<<a.getHealth()<<endl;

    // //dynamic allocation
    // Hero *b=new Hero;
    // b->setLevel('A');
    // (*b).setHealth(80);
    // cout<<"level is "<<(*b).level<<endl;

    // cout<<"health is "<<(*b).getHealth()<<endl;
    // cout<<"health is "<<b->getHealth()<<endl;

    return 0;
}