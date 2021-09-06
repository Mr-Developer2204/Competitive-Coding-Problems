#include <iostream>
#include <vector>
#include<math.h>
#include<algorithm>
using namespace std;

int calculate_hourglass(vector<vector<int>> arr)
{
    int no_of_glasses = pow((arr.size() - 2), 2);
    int sum_max;

    while (no_of_glasses > 0)
    {
        for (int i = 0; i < arr.size(); i++)
        {            
            if(i%2==0){
            for (int j = 0; j < arr.size(); j++)
            {
                sum_max = sum_max+arr[i][j];
            }
            }
            else
            {
                sum_max = sum_max + arr[i+1][i+2];
            }
        }
        no_of_glasses--;
    }

    return sum_max;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int x;
                cin>>x;
                arr.push_back(x);
            }
        }

        int max_sum=calculate_hourglass(arr);
        cout<<max_sum;
    }
    return 0;

}