#include <iostream>
using namespace std;
void reverse(string &str,int i)
{
    
    if (i > str.length()-1-i)
        return;
    swap(str[i], str[str.length()-1-i]);
    i++;
    
    reverse( str,i);
}
int main()
{
    string s = "abcde";
    reverse(s,0);
    cout << s;
    return 0;
}