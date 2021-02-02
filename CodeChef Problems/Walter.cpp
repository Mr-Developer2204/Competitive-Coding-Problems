#include<iostream>
#define in long long
using namespace std;
int main(){

    in T,rounds;
    in a=0,b=0;
    cin>>T;
    while(T!=0){
        rounds=0;
        in X,Y;
        cin>>X>>Y;
        
        if(X==Y){
            rounds=0;
        }
        else if(X<Y){

            while(X!=Y)
            {
                if((Y-X)%2!=0)
                {
                    a = Y-X;
                    X = X+a;
                }
                else if((Y-X)%2==0)
                {
                    b = Y-X;
                    X = X-b;
                }
                
                rounds++;
            }

        }
        
        else if(X>Y){

            while(X!=Y)
            {
                if((X-Y)%2!=0)
                {
                    a = X-Y;
                    X = X+a;
                }
                else if((Y-X)%2==0)
                {
                    b = Y-X;
                    X = X-b;
                }
                
                rounds++;
            }

        }
        
        T--;
        cout<<rounds;
    }

    return 0;
}