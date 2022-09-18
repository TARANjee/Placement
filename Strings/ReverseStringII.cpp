#include <iostream>
using namespace std;

int main()
{
    string s = "abcdefg";
    int i = 0, k = 2;
    int n = s.size();
    for (int j = k - 1; j < n; j = j + k)
    {
        swap(s[i], s[j]);
        
    }

    cout << s;
    return 0;
}
