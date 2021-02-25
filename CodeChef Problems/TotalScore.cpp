#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= 5)
    {
        while (T--)
        {
            int N, K;
            cin >> N >> K;
            int A[K];
            int flag = 0;

            for (int i = 0; i < K; i++)
            {
                cin >> A[i];
                if (A[i] >= 1)
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                string s;
                for (int i = 0; i < N; i++)
                {
                    s = "";
                    int sum = 0;
                    cin>>s;
                    if (s.size() == K)
                    {
                        for (int j = 0; j < K; j++)
                        {
                            if (s.at(j) == '1' || s.at(j) == '0')
                            {
                                if (s.at(j) == '1')
                                {
                                    sum = sum + A[j];
                                }
                            }
                        }
                        cout << sum << endl;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
