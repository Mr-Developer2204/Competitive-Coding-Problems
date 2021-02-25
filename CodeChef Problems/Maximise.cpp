#include <iostream>
#include <math.h>
using namespace std;
#define l long long int
int main()
{
    int T;
    cin >> T;
    
    if (T >= 1 && T <= 5)
    {
        int T1 = T;
        l out[T];
        int cnt = 0;
        l N;
        while (T--)
        {
            
            cin >> N;
            if (N >= 3 && N <= 100000)
            {
                l A[N];
                l max,min;
                int flag=0;
                for (int i = 0; i < N; i++)
                {
                    cin >> A[i];
                    if(i==0)
                    {
                        max = A[i];
                        min = A[i];
                    }
                    if(max<=A[i])
                    {
                        max = A[i];
                    }
                    if(min>=A[i])
                    {
                        min = A[i];
                    }                    
                } 
                out[cnt] = (abs(max-min))*2;
                cnt = T1-T;

            }
        }
        for(int i = 0;i<T1;i++)
        {
            cout<<out[i]<<endl;
        }
    }
    return 0;
}




























// #include <iostream>
// #include <math.h>
// using namespace std;
// #define l long long int
// int main()
// {
//     int T;
//     cin >> T;
//     l N;
//     if (T >= 1 && T <= 5)
//     {
//         while (T--)
//         {
//             cin >> N;
//             if (N >= 3 && N <= 100000)
//             {
//                 l A[N];
//                 int flag = 0;
//                 l maxx,min;
//                 for (int i = 0; i < N; i++)
//                 {
//                     cin >> A[i];
//                     if(i==0)
//                     {
                        
//                         maxx = A[i];
//                         min = A[i];
//                     }
//                     if (abs(A[i] >= 1e+9))
//                     {
//                         flag = 1;
//                         break;
//                     }
//                     if(maxx<=A[i])
//                     {
//                         maxx = A[i];
//                     }
//                     if(min>=A[i])
//                     {
//                         min = A[i];
//                     }
                    

//                 }

//                 if (flag == 0)
//                 {

//                     cout <<((maxx-min)*2) << endl;
//                 }
//             }
//         }
//     }

//     return 0;
// }