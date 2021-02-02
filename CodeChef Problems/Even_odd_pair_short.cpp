#include<iostream>
#include<bits/stdc++.h>
#define l unsigned long long int
using namespace std;
int main(){

    l A,B;
    int 
    double limit = pow(10,9);
    int T,a=0,cnt=0,P,r=0;
    cin>>T;
    int Data[T][2];
    int Even[T];
    if(T>=1 && T<=1000){
        r=T;
    while(r--){
        cin>>A>>B;
        Data[a][0]=A;
        Data[a][1]=B;
        Even[a]=0;
        a++;
    }
    r=T;    
    a=0;
    while(r--)
    {    cnt=0;
        if(Data[a][0]>=1&&Data[a][0]<=limit&& Data[a][1]>=1 && Data[a][1]<=limit)
        {
            l x = std::max(Data[a][0],Data[a][1]);
            l y = std::min(Data[a][0],Data[a][1]);
            l i = 0;
            l j = 0;
            while(x--){
                i++;
                j=0;
                while(y--){
                    j++;
                    P = i+j;
                    if(P%2==0){
                        cnt=cnt+1;
                    }
                    if( )
                }
            }
            Even[a]=cnt;
            a++;
        }
    }   

        for(a=0;a<T;a++)
        {
            cout<<Even[a]<<endl;
        }
    }
    
    return 0;
}