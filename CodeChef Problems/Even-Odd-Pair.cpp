#include<iostream>
#include<bits/stdc++.h>
#define l unsigned long long int
using namespace std;
int main(){

    l A,B,P; 
    double limit=pow(10,9);
    int T,a=0,r=0;
    cin>>T;
    l Data[T][2];
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
    { 
        if(Data[a][0]>=1&&Data[a][0]<=limit&& Data[a][1]>=1 && Data[a][1]<=limit)
        {
            P =  Data[a][0]*  Data[a][1];
            if(P%2!=0){
                cout<<((P+1)/2)<<endl;
            }
            else{
                cout<<(P/2)<<endl;
            }
            a++;
        }
    }   

    }
    
    return 0;
}