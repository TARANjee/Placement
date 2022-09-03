#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &arr, int k, int mid)
{
    int painterCnt = 1;
    int painterSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (painterSum + arr[i] <= mid)
        {
            painterSum += arr[i];
        }
        else
        {
            painterCnt++;
            if (painterCnt > k || arr[i] > mid)
            {
                return false;
            }
            painterSum = arr[i];
        }
    }

    return true;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(6);
    v.push_back(10);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);
    int s = 0;
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    int e = sum;

    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(v, 1, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    cout << ans; // 67
    return 0;
}