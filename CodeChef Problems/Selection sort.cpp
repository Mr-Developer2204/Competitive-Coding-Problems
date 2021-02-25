#include<iostream>
using namespace std;
void print(int s[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout<<"Enter n: ";cin>>n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[n];
    }
    
    cout<<"\n Unsorted Array :"<<endl;

    for (int i = 0; i <n; i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(A[i]<A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    cout<<"Sorted : "<<endl;
    print(A,n);

    

}