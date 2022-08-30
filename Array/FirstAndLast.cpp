#include <iostream>
#include <vector>
using namespace std;
int firstOcc(vector<int> &nums, int k)
{
    int first = 0, end = nums.size() - 1;
    int mid = first + (end - first) / 2;
    int ans = -1;
    while (first <= end)
    {
        if (k == nums[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (k < nums[mid])
            end = mid - 1;
        else
            first = mid + 1;

        mid = first + (end - first) / 2;
    }
    return ans;
}
int secondOcc(vector<int> &nums, int k)
{
    int first = 0, end = nums.size() - 1;
    int mid = first + (end - first) / 2;
    int ans = -1;
    while (first <= end)
    {
        if (k == nums[mid])
        {
            ans = mid;
            first = mid + 1;
        }
        else if (k < nums[mid])
            end = mid - 1;
        else
            first = mid + 1;

        mid = first + (end - first) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);
    v.push_back(10);

    for (auto i : v)
    {
        cout << i << " ";
    }
    vector<int> ans;
    int f=firstOcc(v, 8);
    int s=secondOcc(v, 8);
    ans.push_back(f);
    ans.push_back(s);
    cout<<endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
