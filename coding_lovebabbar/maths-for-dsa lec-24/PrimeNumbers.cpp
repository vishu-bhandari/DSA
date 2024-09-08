#include <iostream>
using namespace std;

bool Prime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

    int
    main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    bool answer = Prime(n);

    if (answer)
    {
        cout << "prime hai bhiaya" << endl;
    }
    else
    {
        cout << "kya yaar nahi hai prime" << endl;
    }

    return 0;
}