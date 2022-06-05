#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int findMax(int arr[],int n)
{
    // Finding an subarray with largest sum
    // taking into consideration an empty array
    // along with array of negative weights

    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max = fmax(max, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<findMax(arr,n);
    
    return 0;
}
