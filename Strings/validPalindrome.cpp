#include <iostream>
using namespace std;
bool validChar(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}
char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(string s)
{
    int i = 0, j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
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
    string s = "A1b22Ba";
    string temp = "";
    // faltu char
    for (char i = 0; i < s.length(); i++)
    {
        if (validChar(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    for (char i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }
    cout << palindrome(temp);
    return 0;
}