#include <iostream>
using namespace std;
void counting(int n)
{
    // Base Case
    if (n == 0) 
        return ;

    //Processing
    // cout << n<<" ";

    // Recursive Relation
    counting(n - 1);

   //Processing
    cout << n<<" ";
}
int main()
{
    int n = 5;
    counting(n);

    return 0;
}