#include <iostream>
using namespace std;

void sum(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr[3][3] = {3,4,11,2,12,1,7,8,7};
    int row = 3, col = 3;
    sum(arr, row, col);
    return 0;
}