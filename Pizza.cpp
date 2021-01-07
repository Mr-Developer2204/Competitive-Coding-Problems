#include <iostream>
using namespace std;

int main() {
    
    int T,N,K;
    cin>>T;
    int T1=T;
    int q=0;
    string str[T];
    if(T>0 &&  T<11){
        while(T--)
        {
            cin>>N>>K;
            if(N>0 && K>0){
                int d = (int)K/N;
                if(d>=1){
                    str[q]="YES";
                }
                else{
                    str[q]="NO";
                }
            }
            q=T1-T;
        }
        for(int a=0;a<T1;a++){
            cout<<str[a]<<endl;
        }
    }
    else{
        cout<<"NO"
    }
	return 0;
}
