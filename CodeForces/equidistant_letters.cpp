#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    //rearrange the letters apperaing twice in the string at equal distance
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++) 
            {
                if(s[i]==s[j])
                {
                    v.push_back(j-i);
                    break;
                }
            }
        }
        if(v.size()==1)
        {
            cout<<s;
        }
        else{

        }
    }
    return 0;
}