#include <iostream>
#include <vector>
using namespace std;

int largestRow(int arr[][3], int row, int col)
{

    int maxi = INT_MIN;
    int rowIndex=-1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }

    
    return rowIndex;
}
int main()
{
    int arr[3][3] = {3, 4, 11, 2, 12, 1, 7, 8, 7};
    int row = 3, col = 3;
    int ans = largestRow(arr, row, col);
    cout << ans;
    return 0;
}