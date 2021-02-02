#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T, T1, cnt = 0, a;
    cin >> T;
    T1 = T;
    int Output[T1];
    if (T >= 1 && T <= 1000)
    {
        while (T--)
        {
            int N, M;
            int sumA = 0, sumO = 0, swap = 0;
            int flagn = 0, flagm = 0;
            cin >> N >> M;
            if (N >= 1 && N <= 1000 && M >= 1 && M <= 1000)
            {
                
                int John[N], Jack[M];

                for (a = 0; a < N; a++)
                {
                    cin >> John[a];
                    if (John[a] >= 1 && John[a] <= 1000000)
                        sumO += John[a];
                    else
                        flagm = 1;
                }

                for (a = 0; a < M; a++)
                {
                    cin >> Jack[a];
                    if (Jack[a] >= 1 && Jack[a] <= 1000000)
                        sumA += Jack[a];
                    else
                        flagn = 1;
                }

                if (flagn == 0 && flagm == 0)
                {
                    sort(John, John + N);
                    sort(Jack, Jack + M);

                    if (sumO > sumA)
                    {
                        Output[cnt] = 0;
                    }
                    else if (sumO <= sumA)
                    {
                        for (a = 0; a < N; a++)
                        {
                            int temp = 0;
                            sumO -= John[a];
                            sumA -= Jack[M - a - 1];
                            sumO += Jack[M - a - 1];
                            sumA += John[a];
                            ++swap;

                            if (sumO > sumA)
                            {
                                Output[cnt] = swap;
                                break;
                            }
                            else
                            {
                                Output[cnt] = -1;
                            }
                        }
                    }
                }
                else
                {
                    Output[cnt] = -1;
                }
            }
            else
            {
                Output[cnt] = -1;
            }

            cnt = T1 - T;
        }
    }
    for (a = 0; a < T1; a++)
    {
        cout << Output[a] << endl;
    }
    return 0;
}