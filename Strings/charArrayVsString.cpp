#include <iostream>
using namespace std;

int main()
{
   char ch[]={'a','b','\0','c'};
   string s="ab\0c";
   cout<<ch<<endl;
   cout<<s<<endl;
    return 0;
}