#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,T1,cnt=0;
    cin>>T;
    T1 =T;
    string str[T];
    char rev[cnt][100];
    while(T--){
        
        cin>>str[cnt];
        string s = str[cnt];
        s.reserve(s.begin(),s.end());
        str[cnt] = s;
        cnt++;
    }
    cnt=0;
    while(T1--){

        cout<<str[cnt]<<endl;
        cnt++;
    
    }
        // int len = str[cnt].length();
        // for(int i=0;i<len;i++){
        //     rev[cnt][i] = str[cnt].at(len-i-1);
        //


}