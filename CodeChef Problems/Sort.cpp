#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "\nUnSorted : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min_index])
            {
                min_index = j;
            }
        }
        int temp = A[i];
        A[i] = A[min_index];
        A[min_index] = temp;

        cout << "\nPass " << i + 1 << endl;
        for (int a = 0; a < n; a++)
        {
            cout << A[a] << " ";
        }
    }
    cout << "\n";
    cout << "\nSorted : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}