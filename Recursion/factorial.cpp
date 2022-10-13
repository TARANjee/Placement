#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0) // Base Case
        return 1;

 //Recursive Relation
    return n * factorial(n - 1);
}
int main()
{
    int n=4;
    

    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}