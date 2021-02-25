#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int T;
    cin>>T;

    if(T>=1 && T<=500)
    {
        string P;
        getline(cin,P);
        int len = P.length();
        int N;
        cin>>N;
        string L[N],R[N];

        for(int i=0;i<N;i++)
        {
            getline(cin,L[i]);
            getline(cin,R[i]);
        }

        cout<<endl;
        for(int i=0;i<N;i++)
        {
            cout<<L[i];
            cout<<R[i]<<endl;
        }

    }
    
    
    
    return 0;

}