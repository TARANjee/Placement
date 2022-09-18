#include <iostream>
using namespace std;

int main()
{
    string s = "Let's take LeetCode contest";
    int i = 0;
    int n = s.size();
    for (int j = 0; j < n; ++j)
    {

        if (s[j] == ' ')
        {
            int k = j - 1;
            while (i < k)
            {
                swap(s[i], s[k]);
                i++;
                k--;
            }
            i = j + 1;
        }
    }
    int k = n - 1;
   
    while (i <= k)
    {

        swap(s[i], s[k]);
        i++;
        k--;
    }
    cout << s;
    return 0;
}
