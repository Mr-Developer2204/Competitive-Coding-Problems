#include <iostream>
using namespace std;
int main()
{

    int T;
    cin >> T;
    int T1,cnt=0;
    T1=T;
    int out[T];
    if (T >= 1 && T <= 100)
    {
        while(T--)
        {
            int y; 
            cin>>y;
            
            if(y%3==0)
            {
                out[cnt] = 1;
            }
            else
            {
                out[cnt] = 0;
            }
            
            cnt=T1-T;
        }
        for(int i = 0;i<T1;i++)
        {
            if(out[i]==1)
            {
                cout<<"YOS"<<endl;
            }
            else
            {
                cout<<"YADA"<<endl;
            }   
        }
    }
    return 0;
}