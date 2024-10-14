#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialise TwoStack
    Stack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;

        arr = new int[s];
    }

    // push in stack1
    void push1(int num)
    {
        // atleast one empty space is there
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    // push in stack2
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{

    Stack st(5);

    st.push1(2);
    st.push1(3);
    st.push2(1);
    st.push2(0);

    cout << st.pop1() << endl;
    cout << st.pop2() << endl;

    return 0;
}