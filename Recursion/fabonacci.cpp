#include <iostream>
using namespace std;
int fibonacci(int n)
{
    // Base Case
    int ans = 0;
    if (n == 0 )
        return 0;
    if (n == 1)
        return 1;

    // Recursive Relation
    ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}
int main()
{
    int n = 8;
    int ans = fibonacci(n);
    cout << ans << endl;
    return 0;
}