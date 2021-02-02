#include <iostream>
using namespace std;
#define ll long int
int main()
{

    int T, T1;
    cin >> T;
    if (T >= 1 && T <= 100000)
    {
        T1 = T;
        int out[T];
        int cnt = T1 - T;
        while (T--)
        {
            ll L, R;

            int b = 0;

            cin >> L >> R;
            if (L <= R)
            {
                if (L >= 1 && L <= 1000000 && R >= 1 && R <= 1000000)
                {
                    int sum[(L * R)];
                    int summ[(L * R)];
                    for (int i = 0; i < (L * R); i++)
                    {
                        sum[i] = 0;
                        summ[i] = 0;
                    }

                    int l = R - L + 1;
                    int A[l];
                    int a;
                    for (int i = 0, a = L; i < l; i++, a++)
                    {
                        A[i] = a;
                    }
                    a = 0;

                    for (int i = 0; i < l; i++)
                    {
                        for (int j = i; j < l; j++)
                        {
                            sum[a] = A[i] + A[j];
                            a++;
                        }
                    }

                    for (int i = 0; i < a; i++)
                    {
                        int flag = 0;
                        for (int k = 0; k < b; k++)
                        {
                            if (sum[k] == sum[i])
                                flag = 1;
                        }
                        if (flag == 1)
                            continue;
                        summ[b] = sum[i];
                        b++;
                    }

                    cout << b << endl;

                    cnt = T1 - T;
                }
            }
        }
    }

    return 0;
}