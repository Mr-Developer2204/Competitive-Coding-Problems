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
            l a, b;
            cin >> a >> b;
            int op=0;
            while (a != 0)
            {
                a = a / b;
                op++;
            }
            cout<<op;
        }

    }

    return 0;
}