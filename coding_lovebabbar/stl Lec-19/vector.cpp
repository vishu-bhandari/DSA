#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    vector<int> a(10,1);


    vector<int> last(a);

    cout<<"printing last  vector"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"printing a with 1"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout << "capacity " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity" << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity" << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity" << v.capacity() << endl;
    
    cout << "size" << v.size() << endl;

    cout<<"element at 2nd index is "<<v.at(2)<<endl;

    cout<<"the front element is "<<v.front()<<endl;

    cout<<"the end element is "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"before clear size"<<v.size()<<endl;
    cout<<"before clear cap"<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;
    cout<<"after clear cap"<<v.capacity()<<endl;


    return 0;
} 