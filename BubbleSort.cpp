#include <iostream>
using namespace std;
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}
int main()
{
    int n, flag = 0;
    cout << "Enter (int number)n:";
    cin >> n;
    if (n > 0)
    {
        int A[n];
        cout << "Enter integer numbers only!!\n";

        for (int i = 0; i < n; i++)
            cin >> A[i];

        cout << "Unsorted : " << endl;

        print(A, n);

        for (int i = 0; i < n - 1; i++)
        {
            flag = 0;
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (A[j] >= A[j + 1])
                {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                break;
            }

            cout << "\nPass"
                 << " " << i + 1 << ":" << endl;

            print(A, n);
        }
        cout << "\nSorted" << endl;
        print(A, n);
    }
    else
    {
        cout << "Invalid Input";
    }
}
