#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums[] = {77, 95, 90, 98, 8, 100, 88, 96, 6, 40, 86, 56, 98, 96, 40, 52, 30, 33, 97, 72, 54, 15, 33, 77, 78, 8, 21, 47, 99, 48};
    int cur = 0;
    int sum = 0;
    int n = 2;
    if (n < 2)
    {
        cout << "out";
    }
    vector<int> v;
    for (int i = 0, j = i + 1; i < 30; i++, j++)
    {
        cur = nums[i] + nums[j];
        v.push_back(cur);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (v[i] == v[j])
               co true;
        }
    }
    cout << "false";

    return 0;
}