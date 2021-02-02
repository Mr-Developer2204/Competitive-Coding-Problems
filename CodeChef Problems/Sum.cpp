#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= 1000)
    {
        while (T--)
        {
            long n, k;
            cin >> n >> k;

            int A[n];
            for (int i = 0; i < n; i++)
            {
                cin >> A[n];
            }
            long long sum;
            int step = 0;
            for (int i; i < n; i++)
            {
                int flag = 0;
                sum = A[i] * 2;
                if (sum % k == 0)
                {
                    cout << "YES";
                }
                else
                {
                    while (sum % k != 0)
                    {
                        if (sum % k == 0)
                        {
                            flag = 1;
                            break;
                        }
                        else
                        {
                            sum = sum + A[i];
                            if (sum <= 1000000)
                            {
                                continue;
                            }
                        }
                        else 
                        break;
                    }
                }

                if (flag = 1)
                    step++;
                else
                {
                    cout << "NO";
                }
            }
        }
    }
}