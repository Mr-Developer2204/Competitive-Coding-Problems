#include <iostream>
using namespace std;

int main()
{

    long long int T, T1;
    cin >> T;
    int Out[T];
    long long int N, M, cnt = 0, var = 0, a, b, m;
    if (T >= 1 && T <= 1000)
    {
        T1 = T;
        while (T--)
        {
            int swap = 0, flagO = 0, flagA = 0, flagm = 0, flagn = 0;
            long long int sumO = 0, sumA = 0;
            cin >> N >> M;
            if (N >= 1 && N <= 1000 && M >= 1 && M <= 1000)
            {
                int John[N], Jack[M];
                int max = std::max(N, M);
                int min = std::min(N, M);

                if (N != M)
                {
                    if (min == N)
                        flagO = 1;
                    else
                        flagA = 1;
                }
                else if (N == M)
                {
                    var = 1;
                }

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
                if (flagm == 0 && flagn == 0)
                {
                    //   cout<<"Sum O: "<<sumO<<endl<<"Sum A:"<<sumA<<endl;

                    for (a = 0; a < N - 1; a++)
                    {
                        for (b = 0; b < N - a - 1; b++)
                        {
                            if (John[b] > John[b + 1])
                            {
                                int temp = John[b];
                                John[b] = John[b + 1];
                                John[b + 1] = temp;
                            }
                        }
                    }

                    for (a = 0; a < M - 1; a++)
                    {
                        for (b = 0; b < M - a - 1; b++)
                        {
                            if (Jack[b] > Jack[b + 1])
                            {
                                int temp = Jack[b];
                                Jack[b] = Jack[b + 1];
                                Jack[b + 1] = temp;
                            }
                        }
                    }

                    if (sumO > sumA)
                    {
                        Out[cnt] = 0;
                    }

                    else if (sumO <= sumA || var == 1)
                    {

                        for (a = 0; a <=N; a++)
                        {
                            //   cout<<"Sum O: "<<sumO<<" "<<"Sum A:"<<sumA<<" "<<"Swap : "<<swap<<endl;

                            if (a < N)
                            {
                                if (flagO == 1)
                                {
                                    sumO -= John[a];
                                    sumA -= Jack[max - a - 1];
                                    sumO += Jack[max - a - 1];
                                    sumA += John[a];

                                    ++swap;
                                }
                                if (flagA == 1 || var == 1)
                                {

                                    sumO -= John[a];
                                    sumA -= Jack[min - a - 1];
                                    sumO += Jack[min - a - 1];
                                    sumA += John[a];

                                    ++swap;
                                }
                            }
                            if (sumO > sumA)
                            {
                                Out[cnt] = swap;
                                break;
                            }
                            else
                            {
                                Out[cnt] = -1;
                            }
                        }
                    }

                    else
                    {
                        Out[cnt] = -1;
                    }
                }
                else
                {
                    Out[cnt] = -1;
                }
            }
            else
            {
                Out[cnt] = -1;
            }
            cnt = T1 - T;
        }
    }

    for (a = 0; a < T1; a++)
    {
        cout << Out[a] << endl;
    }
    return 0;
}
