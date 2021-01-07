#include<iostream>
#define l long long
using namespace std;
int main() {

    l d=0,V=0,V1,D1,V2,D2,P;

    cin>>D1>>V1>>D2>>V2>>P;
    if(P>0 && P<=1000 && V1>0 && V1<=100 && V2>=1 && V2<=100&& D1>0 && D1<=100 &&D2>0 && D2<=100 )
    {
        int D;
        D = std::min(D1,D2);

        while(true)
        {
            if(d<D){
                ++d;
                continue;
            }
            else if(D1==D2){
                V =V1+V2+V;
            }
            else if(D1<D2){
                V= V1+V;
                D1 = D1 +1;
            }
            else if(D1>D2){
                V = V2+V;
                D2 = D2 +1;
            }
            
            if(V==P || V>P){
                break;
            }
            d++;   
            
        }
        cout<<(d);
    }
    return 0;
}