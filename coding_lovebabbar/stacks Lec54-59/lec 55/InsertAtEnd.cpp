#include <iostream>
using namespace std;
#include <stack>

void insertAtEnd(stack<int> &s, int element)
{

    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();
    insertAtEnd(s, element);
    s.push(num);
}

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    int element;
    cout << "enter the element " << endl;
    cin >> element;

    insertAtEnd(s, element);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}