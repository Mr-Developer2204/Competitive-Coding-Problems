#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> s;
    s.push_back("Hello");
    s.push_back("Hi");
    string i;
    for(auto i=s.begin();i!=s.end();i++)
    {
       printf("%s",*i);
    }

    return 0;
}