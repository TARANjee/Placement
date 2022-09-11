#include <iostream>
using namespace std;
string CycMin(int n, string s)
{
     int cnt=0;
     bool status=true;
     string cp=s;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='a' && cnt>0){
            status=false;
        break;
        }
        else{
            if(s[i]=='a'){
                continue;
            }
        char ch=s[i]-1;
        s[i]=ch;
        cnt++;
        }
    }
    if(s[n-1]=='a' && cp[n-1]=='a' && status){
        s[n-1]='z';
    }
    return s;
}
int main()
{
    string s = CycMin(7, "abcadca"); // lymhljjasvws
    cout << endl;
    cout << s;
    return 0;
}