#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= 100)
    {
        while (T--)
        {
            int N;
            int A[N];
            if (N >= 1 && N <= 100000)
            {
                int sum=0;
                for (int i = 0; i < N; i++)
                {
                    cin >> A[i];
                    sum = sum+A[i];
                }
                if(sum)

            }
        }
    }

    return 0;
}