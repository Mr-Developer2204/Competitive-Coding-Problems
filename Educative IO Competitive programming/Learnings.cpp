#include <iostream>
#include <string>
#include<cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*built in methods*/
    int a = 10; 
    int b = 69;

    int m = min(a,b);
    int M = max(a,b);
    swap(a,b);
    cout<<"Max : "<<M<<" Min : "<<m<<" Swapped :" <<a<<" "<<b;
    
    //use of auto keyword
    // for(auto i : v)
    // {
    //     cout<<i;
    // }

    // sometimes pair can be used instead of class or struct
    //example a pair of coordinates
    pair<int,int> coord = {2,3};
    cout<<"\n"<<coord.first<<coord.second;
    // a complex use case
    pair<int,pair<int,int>> x = {2,{2,3}};

    /*I/O in competitive programming*/
    // int z;
    // scanf("\nEnter z:%d",&z);
    // printf("z:%d",z);

    //To make cin faster use this statement, P.S only use cin if this statement is being added to the program
    // ios_base::sync_with_stdio(false); 
    


    
    

   
    return 0;
}