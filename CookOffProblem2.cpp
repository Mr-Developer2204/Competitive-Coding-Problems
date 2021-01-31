#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int lo=0,sp=0,u=0,n=0;
        string s;
        cin>>s;
        int l = s.length();
        cout<<l;
        if(l>=10)
        {
            if(s.at(0)>='a' && s.at(0)<='z' &&s.at(l-1)>='a'&&s.at(l-1)<='z')
            {
                int t=2;
                for (int i = 1; i <l-1; i++)
                {
                    if(s.at(i)>='A' && s.at(i)<='Z')
                    u++;
                    else if(isdigit(s.at(i)))
                    n++;
                    else if(s.at('%')||s.at('&')||s.at('?')||s.at('@')||s.at('#'))
                    sp++;
                    else if(s.at(i)>='a' && s.at('z'))
                    lo++;
                }
                t= t+u+n+sp+lo;
                if(t==l && sp!=0 && n!=0 && u!=0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
                
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}