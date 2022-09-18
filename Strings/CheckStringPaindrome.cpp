#include <iostream>

using namespace std;
char ToLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
    int i = 0, j = s.length() - 1;

    while (i <= j)
    {
        if (ToLowerCase(s[i]) == ToLowerCase(s[j]))
        {
            i++;
            j--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    bool s = checkPalindrome("N4itin");
    if (s == 1)
        cout << "true";
    else
        cout << "false";
    return 0;
}