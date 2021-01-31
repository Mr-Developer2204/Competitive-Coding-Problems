#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,n1;
    cin>>n;
    n1 = n;
    string output[n];
    if(n>=1 && n<=100)
    {
        int cnt=0;
        while(n--)
        {
            string s;
            cin>>s;

            int l = s.length();
            if(l>10)
            {
                output[cnt] = s[0]+(to_string(l-2))+s[l-1];
            }
            else
            {
                output[cnt] =s;
            }
            cnt = n1-n;
        }
        for(int a=0;a<n1;a++)
        {
            cout<<output[a]<<endl;
        }
    }
    return 0;

}