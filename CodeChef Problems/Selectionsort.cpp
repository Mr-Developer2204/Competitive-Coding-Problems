#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[n];
    }
    
    cout<<"\n Unsorted Array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }

    int min_index =0;
    
    for (int i = 0; i <n; i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(A[j]<A[min_index])
            {
                min_index = j;
            }
        }
            int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
    }

    cout<<"\nSorted : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;

}