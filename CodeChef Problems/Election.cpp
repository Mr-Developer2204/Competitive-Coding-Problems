#include<iostream>
using namespace std;
int sum(int[],int);

int main(){

    long long int T,T1;
    cin>>T;
    if(T>=1 && T<=1000){
    long long int N,M,cnt=0,var=0,a,b;
    int Out[T];

    T1 = T;
    while(T--){
        int swap=0,flagO=0,flagA=0;
        long long int sumO=0,sumA=0;
        cin>>N>>M;
        if(N>=1 && N<=1000 && M>=1 && M<=1000){
        int John[N],Jack[M];
        int max = std::max(N,M);
        int min = std::min(N,M);

    if(N!=M){
        if(min==N)
            flagO=1;
        else
            flagA=1;
    }
    else if(N==M){
        var=1;
    }
         

        for(a =0;a<N;a++){
            cin>>John[a];   
        }
        for(a =0;a<M;a++){
            cin>>Jack[a];
        }

        sumO = sum(John,N);
        sumA = sum(Jack,M);
        //  cout<<"Sum O: "<<sumO<<endl<<"Sum A:"<<sumA<<endl;


        for(a = 0;a<N-1;a++){
            for(b =0;b<N-a-1;b++){
                if(John[b]>John[b+1]){
                    int temp = John[b];
                    John[b]= John[b+1];
                    John[b+1]= temp;
                }
            }
        }
        

        for(a = 0;a<M-1;a++){
            for(b =0;b<M-a-1;b++){
                if(Jack[b]>Jack[b+1]){
                    int temp = Jack[b];
                    Jack[b]= Jack[b+1];
                    Jack[b+1]= temp;
                }
            }
        }

        if(sumO>sumA){
            Out[cnt]=0;
        }

        else if(sumO<=sumA || var==1){
            
            for(a =0;a<=min;a++){
                //  cout<<"Sum O: "<<sumO<<" "<<"Sum A:"<<sumA<<"Swap : "<<swap<<endl;
                if(sumO>sumA){
                    Out[cnt]=swap;
                    break;
                }
                else if(a<min){
                    if(flagO==1)
                    {
                        int temp = John[a];
                        John[a] = Jack[max-a-1];
                        Jack[max-a-1] = temp;
                        sumO = sum(John,N);
                        sumA = sum(Jack,M);
                        ++swap;
                    }
                    if(flagA==1 || var==1)
                    {
                        int temp = Jack[min-a-1];
                        Jack[min-a-1] = John[a];
                        John[a] = temp;
                        sumO = sum(John,N);
                        sumA = sum(Jack,M);
                        ++swap;
                    }
                    
                }
            }
        }

        if(sumO == sumA){
            Out[cnt]=-1;
        }

        cnt = T1-T;

        

        for(a=0;a<T1;a++){
            cout<<Out[a]<<endl;
        }
    }
        }   
    }
        return 0;
    }
    
int sum( int A[],int n){
    int Sum=0;
    for(int a=0;a<n;a++){
        Sum = Sum + A[a];    
    }
    return Sum;
}

