#include<iostream>
using namespace std;

void reverseArray(int A[],int start,int end)
{
    for (int i = 0; i < N/2; i++)
    {
        temp = A[i];
        A[i] = A[N-i-1];
        A[N-i-1] = temp;
    }
    
}


int main()
{
    int N;
    cout<<"Enter the no of elements:";
    cin>>N;
    
    int A[N];
    for (int i = 0; i <N; i++)cin>>A[i];
    int temp=0;
    for (int i = 0; i < N/2; i++)
    {
        temp = A[i];
        A[i] = A[N-i-1];
        A[N-i-1] = temp;
    }
    for(int i=0;i<N;i++)cout<<A[i]<<" ";
    return 0;

}
