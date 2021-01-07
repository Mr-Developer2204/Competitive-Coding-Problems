#include<iostream>
using namespace std;
#define l unsigned long long int
int main()
{
    l D,N,K;
    l sum=0;
    int T,T1;
    cin>>T;
    int O[T],cnt=0;
    T1=T;

    while(T--)
    {
        sum=0;
        
        cin>>N>>K>>D;
        l A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            sum = sum+A[i];
        }
    
        if(sum>=(D*K)){
            O[cnt] = D;
        }
        else if(sum<(D*K)){
            O[cnt]=(int)sum/K;
        }
        cnt= T1-T;
    }

    for(int i=0;i<T1;i++){

        cout<<O[i]<<endl;

    }
    return 0;
}