#include <iostream>
using namespace std;
char ToLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
    char temp=ch-'A'+'a';
    return temp;
    }
}
int main()
{
    char name[40] = {"5?36@6?35"};
    int i = 0, j = 8;
    bool isPalindrome = true;
    while (i <= j)
    {
        if (ToLowerCase(name[i]) == ToLowerCase(name[j]))
        {
            i++;
            j--;
            isPalindrome = true;
        }
        else
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome == 1)
        cout << "true";

    else
        cout << "false";

    return 0;
}
