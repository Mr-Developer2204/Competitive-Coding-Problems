#include <iostream>
using namespace std;
#define ll long int
int main()
{
    int t;
    cin >> t;

    if (t >= 1 && t <= 100)
    {
        while (t--)
        {
            ll a, b;
            cin >> a >> b;
            int op = 0;
            if (a >= 1 && b >= 1 && a <= 1E+9 && b <= 1E+9)
            {
                if(a<b)
                {
                    cout<<"1";
                    
                }

                if (b == 1)
                {
                    b++;
                    op = 1;
                }
                int max = op;
                int temp = a;
                for (int i = b;b<temp; i++)
                {
                    temp =a;
                    while (a != 0)
                    {
                        a =a / b;
                        op++;
                        b = b+1;
                        op++;
                    }
                    if(op>=max)
                    {
                        max = op;
                        cout<<op<<endl;
                    }
                }
                cout << op;
            }
        }
    }

    return 0;
}