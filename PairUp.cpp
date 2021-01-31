#include<iostream>
using namespace std;
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>=1 && x<=1000 && y>=1 && y<=1000&&z>=1 && z<=1000)
        {
            int flag=1,f=0;
            int temp2 =x;
            while(flag!=0)
            {
                int sum = x+y;
                if(z==sum)
                {
                    flag=0;
                    cout<<"YES"<<endl;
                    break;
                }
                else
                {
                    int temp = x;
                    x = y;
                    y = z;
                    z = temp;

                }
                if(x==temp2)
                {
                    f=1;
                    break;
                    
                }

            }

            if(f==1 && flag!=0)
            {
                cout<<"NO"<<endl;
            }

        }
    }
    

    return 0;
}