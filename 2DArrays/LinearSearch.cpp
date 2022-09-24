#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int tar, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == tar)
            {
               return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3, col = 3;
    int target = 5, cnt = 0;

    if (isPresent(arr, target, row, col))
        cout << "element found";
    else
        cout << "element not found";

    return 0;
}