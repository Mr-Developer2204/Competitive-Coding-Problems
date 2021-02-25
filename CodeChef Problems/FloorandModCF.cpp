#include <iostream>
using namespace std;
#define l long long int
int main()
{

    int t;
    cin >> t;

    if (t >= 1 && t <= 100)
    {
        int T1 = t;
        int cnt = 0;
        int out[t];
        while (t--)
        {
            l x, y;
            cin >> x >> y;
            if (x >= 1 && x <= 1e+9 && y >= 1 && y <= 1e+9)
            {
                int sp = 0;
                l max;
                
                l tem = 1;
                for (l i = 1; i <=x;)
                {

                    if ((i / tem) == (i % tem))
                        sp++;
                    if (y == tem)
                    {
                        tem = 1;
                        i++;
                    }
                    else
                        tem = tem + 1;
                }

                out[cnt] = sp;
                cnt = T1 - t;
            }
        }
        for (int i = 0; i < T1; i++)
        {
            cout << out[i] << endl;
        }
    }

    return 0;
}
