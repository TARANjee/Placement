#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3, col = 3;
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s) / 2;
    int tar = 31;
    int isFound = false;
    while (s <= e)
    {
        int element = arr[mid / col][mid % col];

        if (element == tar)
        {
            isFound = true;
            break;
        }
        if (element < tar)
            s = mid + 1;

        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    if (isFound)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}