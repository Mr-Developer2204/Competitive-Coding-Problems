#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 1000)
    {
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int days = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[i] == -1)
                continue;
            int type = 1;
            for (int j = i + 1; j < n; j++)
            {

                if (a[i] == a[j])
                {
                    type++;
                    a[j] = -1;
                }
            }

            if (type % 2 != 0)
            {
                days = days + (type / 2) + 1;
            }
            else if (type % 2 == 0)
            {
                days = days + (type / 2);
            }
        }
        cout << days;
    }
    return 0;
}