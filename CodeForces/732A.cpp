#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n],y[n];
        int sumx=0,sumy=0;
        for(int i=0;i<n;i++)
        {
            if(sumx>=0&& sumx<=100)
                cin>>x[i];
            sumx+=x[i];
        }
        for(int i=0;i<n;i++)
        {
            if(sumy>=0&& sumy<=100)
                cin>>y[i];
            sumy+=y[i];
        }

        for (int i = 0; i <n; i++)
        {
            while (x[i]!=y[i])
            {
                
            }
            
                    
        }
        



    }
    return 0;
}