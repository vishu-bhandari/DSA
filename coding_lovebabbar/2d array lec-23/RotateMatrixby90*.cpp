#include <iostream>
using namespace std;

void RotateRows(int arr[][3], int nrow, int mcol) {
    for (int i = 0; i < nrow; i++) {
        int s = 0;
        int e = mcol - 1;
        while (s < e) {
            swap(arr[i][s], arr[i][e]);
            s++;
            e--;
        }
    }
}

void RotateMatrix(int arr[][3], int nrow, int mcol) {
    // Transpose of the matrix
    for (int i = 0; i < nrow; i++) {
        for (int j = i + 1; j < mcol; j++) { // Only swap elements where i < j
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    RotateRows(arr, nrow, mcol);
}

int main() {
    int arr[3][3];

    cout << "Input the array (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The array you entered:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    RotateMatrix(arr, 3, 3);

    cout << "Rotated matrix (90 degrees clockwise):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
