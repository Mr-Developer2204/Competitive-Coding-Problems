#include<iostream>
#include<math.h>
using namespace std;
#define l long long int
int main()
{
    l T;
    cin>>T;
    while(T--)
    {
        l N,M,V=0;
        cin>>N>>M;
        l A[N],B[M];
        if(N>=1 && N<(pow(2,20))&& M>=1 && M<=(pow(2,20)))
        {
            for(int a=0;a<N;a++)
                cin>>A[a];

            for(int a=0;a<M;a++)
                cin>>B[a];

        }
    }

    return 0;
}