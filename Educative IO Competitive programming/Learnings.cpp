#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*built in methods*/
    int a = 10;
    int b = 69;

    int m = min(a, b);
    int M = max(a, b);
    swap(a, b);
    cout << "Max : " << M << " Min : " << m << " Swapped :" << a << " " << b;

    // use of auto keyword
    //  for(auto i : v)
    //  {
    //      cout<<i;
    //  }

    // sometimes pair can be used instead of class or struct
    // example a pair of coordinates
    pair<int, int> coord = {2, 3};
    cout << "\n"
         << coord.first << coord.second;
    // a complex use case
    pair<int, pair<int, int>> x = {2, {2, 3}};

    /*I/O in competitive programming*/
    // int z;
    // scanf("\nEnter z:%d",&z);
    // printf("z:%d",z);

    // To make cin faster use this statement, P.S only use cin if this statement is being added to the program
    //  ios_base::sync_with_stdio(false);

    // Big O runtimes

    int y = 0, N;
    // 1. Trivial Runtimes
    //  O(1)
    for (int i = 0; i < 100; i++)
        y++;

    // 2. Linear Runtimes
    //  O(n)
    for (int i = 0; i < N; i++)
        y++;

    // 3. Quadratic Runtimes
    //  O(n^2)
    for (int i = 0; i < N; i++)
        for (int j = 0; j < i; j++)
            y++;

    // 4. Exponential Runtimes
    //  O(2^n)
    // recursive algorithm example
    //  int fibo(int N)
    //  {
    //      if(N==0)
    //          return 1;
    //      else
    //          return fibo(N-1)+fibo(N-2);
    //  }

    // 5. Logarithmic Runtimes
    //  O(log n)
    for (int i = 1; i <= N; i *= 2)
        y++;
    // OR
    for (int i = N; i >= 1; i = i / 2)
        y++;

    // 6. Polynomial Runtimes
    //  O(n^k)

    // 7. Factorial Runtimes
    //  O(n!)

    /*
        Sum of powers#
        Take the code sample below:

        for (int i = 1; i <= N; i *= 2)
            for (int j = 1; j <= i; j++)
                x++;
        As discussed earlier, the outer loop runs (logN + 1)(logN+1) times. The number of times the inner loop runs is equal to the first loop variable ii.

        Iteration 11: Inner loop runs for 11 time
        Iteration 22: Inner loop runs for 22 times
        Iteration 33: Inner loop runs for 44 times
        …
        Iteration (logN + 1)(logN+1): Inner loop runs for 2^{(logN + 1)}2
        ​(logN+1)
        ​​  times
        The number of operations forms a Geometric Progression which we will cover in the Number Theory chapter later on. We will use the sum formula directly here:

        1 + 2 + 4 + ... + 2^{(logN + 1)}1+2+4+...+2
        ​(logN+1)
        ​​

        = \frac{1*(2^{logN+2} - 1)}{2 - 1}=
        ​2−1
        ​
        ​1∗(2
        ​logN+2
        ​​ −1)
        ​​

        = 2^{logN+2} - 1=2
        ​logN+2
        ​​ −1

        = 4*2^{logN} - 1=4∗2
        ​logN
        ​​ −1

        = 4*N - 1=4∗N−1

        So, the run-time complexity is actually linear - O(N)O(N)
    */

    /*  N   -  Acceptable Runtime 

    1. 10^7 -   O(N)
    2. 10^6 -   O(N*logN)
    3. 10^5 -   O(N * logN) OR O(N * N^0.5)
    4. 10^4 -   O(N^2)
    5. 10^3 -   O(N^2 * logN)
    6. 10^2 -   O(N^3)
    7. 20-25 -  O(2^N)
    8. 20   -   O(2^N * N)
    9. 10   -   O(N^6),O(N!)
        

    */
    return 0;
}