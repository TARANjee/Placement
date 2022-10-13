#include <iostream>
using namespace std;
int checkSorted(int arr[], int size)
{
    // Base Case

    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = checkSorted(arr + 1, size - 1);
        return remainingPart;
    }
    // Recursive Relation
}
int main()
{
    int arr[] = {2, 4, 8, 8, 9};
    int size = 5;
    if (checkSorted(arr, size))
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }

    return 0;
}