#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    if(T>=1 && T<=10){
    char E[16] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    string str[16] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
    int k,i,j;
    string out[T],s;
    int T1=T;
    int q=0;
    int N,cnt;
    s="";
    while(T--){

        cin>>N;
        if(N>3){
        string encoded;
        cin>>encoded;
        s="";
        // cnt=0;
        // for(i=1;i<=N;i++)
        // {   
        //     s+=encoded.at(i-1);
        //     if(i%4==0){
        //         str1[cnt]=s;
        //         s="";
        //         ++cnt;
        //     }
        // }
        i=1;
        while(i<=N){
            s+=encoded[i-1];
            if(i%4==0){
            for(j=0;j<16;j++){
                if(s==str[j])
                {    
                    out[q]=out[q]+E[j];
                
                }
            }
            s="";
         }
         i++;
        }
        q=T1-T;

    }
    }
    for(i=0;i<T1;i++){
        cout<<out[i]<<endl;
    }
    }
    return 0;
}


