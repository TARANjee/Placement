#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1 ,2 ,7 ,-4 ,3 ,2 ,-10 ,9, 1};
    int n = 7, sum = 0;
    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxSum = max(sum, maxSum);
        if (sum < 0)
            sum = 0;
    }

    cout << maxSum;
    return 0;
}