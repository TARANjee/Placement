#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int s = arr[0];
    // Base case
    if (size == 0 )
        return 0;
   
    s = s + sum(arr + 1, size - 1);
    return s;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int s = sum(arr, size);
    cout << s;
    return 0;
}