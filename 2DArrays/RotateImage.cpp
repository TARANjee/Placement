#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3, col = 3;
    int start = 0;
    int end = col - 1;

    cout << "Input" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //Transpose of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    //Reverse the array
    for (int i = 0; i < row; i++)
    {
        start = 0;
        end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    cout << "Output" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
