#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int T1=t;
    if (t >= 1 && t <= 1000)
    {
        int cnt=0;
        string out[t];
        while (t--)
        {
            int x, y;
            cin >> x >> y;

            if (x >= -100000 && x <= 100000 && y >= -100000 && y <= 100000 && x != 0 && y != 0)
            {
                string s;
                cin >> s;
                int len = s.size();
                
                if (len >= 1 && len <= 100000)
                {

                    int x0 = 0, y0 = 0;
                    int r=0, u=0, d=0, l=0;
                    int ru = 0, ld = 0, rd = 0, lu = 0;
                    if (x > 0 && y > 0)
                    {
                        ru = 1;
                        r = x - x0;
                        u = y - y0;
                    }
                    else if (x > 0 && y < 0)
                    {
                        rd = 1;
                        r = x - x0;
                        d = -y - y0;
                    }
                    else if (x < 0 && y > 0)
                    {
                        lu = 1;
                        l = -x - x0;
                        u = y - y0;
                    }
                    else if (x < 0 && y < 0)
                    {
                        ld = 1;
                        l = -x - x0;
                        d = -y - y0;
                    }

                    int flag = 0;
                    int R = 0, U = 0, D = 0, L = 0;
                    for (int i = 0; i < len; i++)
                    {

                        if (ru == 1)
                        {
                            if (s.at(i) == 'R')
                            {
                                R++;
                            }
                            if (s.at(i) == 'U')
                            {
                                U++;
                            }
                            if (R == r && U == u)
                            {
                                flag = 1;
                                break;
                            }
                            else
                            {
                                flag = 0;
                            }
                        }
                        else if (rd == 1)
                        {
                            if (s.at(i) == 'R')
                            {
                                R++;
                            }
                            if (s.at(i) == 'D')
                            {
                                D++;
                            }
                            if (R == r && D == d)
                            {
                                flag = 1;
                                break;
                            }
                            else
                            {
                                flag = 0;
                            }
                        }
                        else if (ld == 1)
                        {

                            if (s.at(i) == 'L')
                            {
                                L++;
                            }

                            if (s.at(i) == 'D')
                            {
                                D++;
                            }
                            if (L == l && D == d)
                            {
                                flag = 1;
                                break;
                            }
                            else
                            {
                                flag = 0;
                            }
                        }
                        else if (lu == 1)
                        {
                            if (s.at(i) == 'L')
                            {
                                L++;
                            }
                            if (s.at(i) == 'U')
                            {
                                U++;
                            }
                            if (L == l && U == u)
                            {
                                flag = 1;
                                break;
                            }
                            else
                            {
                                flag = 0;
                            }
                        }
                    }
                    if (flag == 1)
                        out[cnt] = "YES";
                    else
                    {
                        out[cnt]="NO";
                    }
                    
                }
            }
            cnt = T1-t;
        }
        for(int i=0;i<T1;i++)
        {
            cout<<out[i]<<endl;
        }
    }
    return 0;
}