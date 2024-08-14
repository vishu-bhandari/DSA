#include <iostream>
#include <vector>
using namespace std;

vector<int> ArrayIntersection(int arr1[], int n, int arr2[], int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the first array: " << endl;
    cin >> n;

    int arr1[100];
    cout << "Enter the elements of the first array (sorted): " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;

    int m;
    cout << "Enter the size of the second array: " << endl;
    cin >> m;

    int arr2[100];
    cout << "Enter the elements of the second array (sorted): " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;

    vector<int> answer = ArrayIntersection(arr1, n, arr2, m);
    cout << "Intersection of the two arrays: ";
    for (int num : answer)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
