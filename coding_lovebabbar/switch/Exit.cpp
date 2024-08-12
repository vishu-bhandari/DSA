#include <iostream>
using namespace std;

int main()
{

    while (true)
    { // Infinite loop
        int n;
        cout << "Enter a number: ";
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Case 1" << endl;
            break; // Exits the switch, but not the loop
        case 2:
            cout << "Case 2" << endl;
            break; // Exits the switch, but not the loop
        case 3:
            cout << "Exiting program..." << endl;
            exit(0); // Terminates the entire program
        default:
            cout << "Default case" << endl;
            break;
        }
    }

    return 0;
}