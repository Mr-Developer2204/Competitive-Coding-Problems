#include <iostream>
using namespace std;
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    if (n > 0)
    {
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        cout << "\nUnsorted :\n";
        printArray(A, n);
        cout<<endl;
        int j = 0, key;
        for (int i = 1; i < n; i++)
        {
            key = A[i];
            j = i - 1;
            while (j >= 0 && A[j] > key)
            {
                A[j + 1] = A[j];
                j = j - 1;
                
            }
            A[j + 1] = key;
            cout << "\nPass " << i << ":" << endl;
            printArray(A, n);
        }
        cout << "\n\nSorted: \n";
        printArray(A, n);
    }
    else
        cout<<"N cannot be 0 or negative";

    return 0;
}