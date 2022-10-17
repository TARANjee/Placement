#include <iostream>
using namespace std;
int power(int n)
{
    if (n == 0) // Base Case
        return 1;
    //Recursive Relation
    return 2 * power(n - 1);
}
int main()
{
    int n=9;
    int ans = power(n);
    cout << ans << endl;
    return 0;
}
