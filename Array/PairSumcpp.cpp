#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int arr[] = {1, -1,2,-3,-2};
  vector<vector<int> > ans;

  int n = 5;
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == k)
      {
        vector<int> temp;
        temp.push_back(min(arr[i],arr[j]));
        temp.push_back(max(arr[i],arr[j]));
        ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(),ans.end());
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans.size(); j++)
    {
      cout << ans[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}