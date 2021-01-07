// #include <iostream>
// using namespace std;
// #define l string
// char E[16];
// string s="",str[16],str1[16];
// int main() {
	
//     int T;
//     cin>>T;
//     if(T>=1 && T<=10){
    
//     std::fill(std::begin(E),std::end(E),'\0');
//     int i,j;
    
//     char a;
//     for(int n=0,a='a';n<16;n++,a++)
//     {
//         E[n]=a;
//         s="";
//         for (i = 3;i >= 0; i--)
//         {   
            
//             int k = n >> i;
//             if (k & 1) 
//             {    
//                 s+="1";
//             }
//             else
//             {   
//                 s+="0";
//             }
//         }
//         str[n]=s;
//     }

//     l out[T];
//     int T1=T;
//     int q=0;
//     int N,cnt;
//     s="";
//     while(T--){

//         cin>>N;
//         if(N>3){
//         string encoded;
//         cin>>encoded;
//         s="";
        
//         cnt=0;
//         for(i=1;i<=N;i++)
//         {   
//             s+=encoded.at(i-1);
//             if(i%4==0){
//                 str1[cnt]=s;
//                 s="";
//                 ++cnt;
//             }
//         }
        
//         for(i=0;i<(N/4);i++){
//             for(j=0;j<16;j++){
//                 if(str1[i]==str[j])
//                 {    
//                     out[q]=out[q]+E[j];
                
//                 }
//             }
//         }
//         q=T1-T;

//     }
//     for(i=0;i<T1;i++){
//         cout<<out[i]<<endl;
//     }
//     }
//     }
//     return 0;
// 	return 0;
// }
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string str = "geeks forgeeks"; 
  
    // Reverse str[begin..end] 
    reverse(str.begin(), str.end()); 
  
    cout << str; 
    return 0; 
} 