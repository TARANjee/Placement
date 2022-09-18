#include <iostream>
using namespace std;
bool isprime(int n)
{
    int prime = false;
    if(n==0){
        return 0;
    }
    for (int i = 2; i < n ; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int totalPrime(int s, int e)
{
    int cnt = 0;
    for (int i = s; i <= e; i++)
    {
        if (isprime(i) == 1)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int s = 2, e = 20;
    cout << totalPrime(s, e);
    return 0;
}
