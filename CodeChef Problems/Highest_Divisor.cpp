#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int max=1;
    for(int i=1;i<=10;i++)
    {
        if(N%i==0)
        {
            max = i;
        }
    }

    cout<<max;

    return 0;
}