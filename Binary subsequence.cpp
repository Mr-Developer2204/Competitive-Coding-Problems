#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        char ch[n];
        string s;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
            if (ch[i] == '1' || ch[i] == '0')
            {
                s = s+ch[i]];
            }
            else
            {
                flag = 1;
                break;
            }
        }

        if (flag != 1)
        {
            for (int i = 0; i < n; i++)
            {
            }
        }
    }

    return 0;
}