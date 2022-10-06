#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 4, 7, 2, 5, 8, 10, 16, 19};
    int row = 3, col = 3;
    int rowIndex = 0;
    int colIndex = col - 1;

    int tar = 25;
    int isFound = false;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];

        if (element == tar)
            isFound = true;
        if (element < tar)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    if (isFound)
        cout << "Element founded";
    else
        cout << "Element not found";

    return 0;
}