#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter no of elements :";cin>>n;

    int A[n];

    for (int i = 0; i < n; i++)cin>>A[i];
    
    int element;
    cout<<"\n######################################";
    cout<<"\n\nEnter element to be searched :";cin>>element;

    int flag=1;
    for (int i = 0; i <n; i++)
    {
        if(A[i]==element)
        {
            cout<<"Element: "<<A[i]<<" is present at index "<<i;
            flag =0;
            break;
        }
    }
    if(flag!=0)
    {
        cout<<"Element not found!!";
    }

    return 0;

}