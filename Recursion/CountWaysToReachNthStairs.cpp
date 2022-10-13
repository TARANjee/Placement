#include <iostream>
using namespace std;
int countways(int n)
{
    // Base Case
    if (n <0) 
        return 0;
    if (n == 0) 
        return 1;

    // Recursive Relation
    return countways(n - 1) +countways(n - 2);


}
int main()
{
    int n = 4;
    cout<<countways(n)<<endl;

    return 0;
}