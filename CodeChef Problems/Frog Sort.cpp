#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= 20000)
    {
        while (T--)
        {
            int N;
            cin >> N;
            if (N >= 2 && N <= 4)
            {
                int W[N];
                int flag = 0;
                for (int i = 0; i < N; i++)
                {
                    cin >> W[i];
                    if (W[i] >= 1 && W[i] <= N)
                        continue;
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    int L[N];
                    for (int i = 0; i < N; i++)
                    {
                        cin >> L[i];
                        if (L[i] >= 1 && L[i] <= 5)
                            continue;
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }

                    if (flag == 0)
                    {
                            
                    }
                }
            }
        }
    }

    return 0;
}