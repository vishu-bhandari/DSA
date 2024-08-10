#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    const int BITS = 8; // Assuming an 8-bit representation for simplicity

    if (n < 0) {
        // Convert negative number to binary using 2's complement
        int positive_n = -n; // Get the positive version of the number
        int twos_complement = (~positive_n + 1) & ((1 << BITS) - 1); // Compute 2's complement and mask to fit BITS
        cout << "Binary equivalent (2's complement): ";
        for (int i = BITS - 1; i >= 0; --i) {
            cout << ((twos_complement >> i) & 1); // Print each bit
        }
        cout << endl;
    } else {
        // Convert positive number to binary
        cout << "Binary equivalent: ";
        for (int i = BITS - 1; i >= 0; --i) {
            cout << ((n >> i) & 1); // Print each bit
        }
        cout << endl;
    }

    return 0;
}
