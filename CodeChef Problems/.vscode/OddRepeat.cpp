// OddRepeat Starters 10

#include<iostream>
using namespace std;
int main()
{   
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,s;
        cin>>n>>k>>s;
        int a[n];
        int sum=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            a[i] = 2*(i+1)-1;
        }
        int  i=0;
        int ans;
        for(int i=0;i<n;i++)
        {   
            sum=0;
            sum = (n*n)+(a[i]*k)-a[i];
            if(sum==s)
            {
                ans = a[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    


    return 0;
}