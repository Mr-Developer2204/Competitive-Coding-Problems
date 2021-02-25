#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> A;
    A.push_back(1);
    A.push_back(2);

    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i];
    }

    cout<<endl;

    for(auto ele : A)
    {
        cout<<ele;
    }
    
    cout<<endl;

    vector<int>::iterator it;
    for(it = A.begin();it!=A.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;

    A.pop_back();

    for(auto ele : A)
    {
        cout<<ele;
    }
    cout<<endl;
    vector<int>v (5,0);

    for(auto ele: v)
    {
        cout<<ele;
    }

    swap(A,v);

    for(auto ele: v)
    {
        cout<<ele;
    }
    cout<<"\n";
    

    A.push_back(12);
    A.push_back(10);
    A.push_back(2);
    
    sort(A.begin(),A.end());
    cout<<endl;
    for(auto ele: A)
    {
        cout<<ele<<" ";
    }



    return 0;
    
    
}