// Hardest problem starter 10

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;

        cin>>A>>B>>C;

        if(C<B && C<A)
        {
            cout<<"Alice"<<endl;
        }
        else if(B<C && B<A)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }

    }

    return 0;
}