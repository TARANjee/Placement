#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> arr, int n, int k, int mid)
{
    int cowCnt = 1;
    int lastpos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastpos >= mid)
        {
            cowCnt++;
            if (cowCnt == k)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int main()
{
    vector<int> arr;
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int k = 2; // number of cows
    int mini = arr[0];
    int maxi = arr[n - 1];
    int ans = -1;
    int s = 0, e = maxi - mini;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    cout << ans;
    return 0;
}