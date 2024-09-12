#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{

    // base case
    cout<<"abhi mai hu  "<<src<<"km, abhi itna durr hai "<<dest-src<<"km"<<endl;
    if(src==dest){
        cout<<"pahuch gyaa ghar bhaiyaaaa "<<endl;
        return ;
    }

    src++;
    reachHome(src,dest);

}

int main()
{
    int dest = 10;
    int src = 1;

    reachHome(src, dest);

    return 0;
}