#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // vector<int> *vp= new vector<int>(); vector dynamically created

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    // dont use this for inserting elements
    // v[3]=1002;
    // v[4]=1003;

    v.push_back(40);
    v.push_back(50);

    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    // cout<<v[3]<<endl;
    // cout<<v[4]<<endl;
    // cout<<v[6]<<endl;
    // cout<<v[6]<<endl;
    // cout<<v[7]<<endl;

    // cout<<"size:"<<v.size()<<endl;

    // cout<<v.at(2)<<endl;
    // cout<<v.at(6)<<endl;
    // at is much safer to use

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    for(int i=0;i<100;i++){
        cout<<"size:"<<v.size()<<endl;
        cout<<"capacity:"<<v.capacity()<<endl;
        v.push_back(i+1);

    }
   
    
}