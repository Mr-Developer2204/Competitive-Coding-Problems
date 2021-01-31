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
            int N;
            cin >> N;
            if (N >= 1 && N <= 500)
            {
                int A[N];
                int flag=0;
                int odd = 0,even=0;
                for (int i = 0; i < N; i++)
                {
                    cin >> A[i];
                    if (A[i] >= 1 && A[i] <= 100000)
                    {
                        if(A[i]%2!=0)
                            odd++;
                        else
                            even++;
                        continue;
                    }
                    else
                    {
                        flag = 1;
                    }
                }
                if (flag != 1)
                {
                    int op = 0;
                    if(even<odd)
                        op= even;
                    else if(even > odd)
                        op = odd;
                    else if(even == odd)
                        op = odd;
                    
                    cout << op << endl;
                }
            }
        }
    }
    return 0;
}