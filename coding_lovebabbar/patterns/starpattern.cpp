//         *
//     *   *
// *   *   *

#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows

    int i = 1;
    while (i <= n) { // Outer loop for rows
        int j = i;
        while (j < n) { // Inner loop for leading spaces
            cout << " "; // Print space
            j++;
        }

        int k = 1;
        while (k <= i) { // Inner loop for stars
            cout << "*"; // Print star
            k++;
        }

        cout << endl; // Move to the next line after each row
        i++;
    }

    return 0;
}

