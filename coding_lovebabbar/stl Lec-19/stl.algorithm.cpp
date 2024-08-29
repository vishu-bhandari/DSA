#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6 using Bs " <<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),1)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<endl;

    int a=3;
    int b=5;
     
    swap(a,b);
    cout<<"swapped a before 3 "<<a<<endl; 
    cout<<"swapped b before 5 "<<b<<endl;
    cout<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string " <<abcd<<endl<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotate ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl<<endl;

    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}


