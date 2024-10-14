#include <iostream>
using namespace std;
#include <stack>

void deleteMiddle(stack<int> &s, int count, int n)
{

    // base case
    if (count == n / 2)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();
    deleteMiddle(s, count + 1, n);
    s.push(num);
}

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int count = 0;

    deleteMiddle(s, count, 5);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}