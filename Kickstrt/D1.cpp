#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        cnt++;
        int n,c;
        cin>>n>>c;
        int a[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
        }
        int cuts=0;
        for(int i=0;i<n;i++)
        {
            if((a[i][0]<a[i][1]))
            {
                if((a[i][1]-a[i][0])<c)
                {
                    cuts = cuts + (a[i][1]-a[i][0]);
                }
                else{
                    cuts = cuts+c;
                }
            }
        }
        
        cout<<"Case #"<<(cnt)<<": "<<cuts<<endl;
        
    }
}