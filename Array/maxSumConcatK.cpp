#include <iostream>
#include <vector>
using namespace std;
int maxSubSumKConcat(int arr[], int n, int k)
{
    vector<int> temp;
    int sum = 0, maxsum = -32544;
    for (int i = 0; i < n*k; i++)
    {
        
            temp.push_back(arr[i]);
        
    }
    for (int i = 0; i < temp.size(); i++)
    {
        sum += temp[i];
        if (sum > maxsum)
            maxsum = sum;

        if (sum < 0)
            sum = 0;
    }

    return maxsum;
}
int main()
{
    int arr[] = {-1, 10,20};
    int n = 3;
    int k = 1;
    cout << maxSubSumKConcat(arr, n, k);
    return 0;
}