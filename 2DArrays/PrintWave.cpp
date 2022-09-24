#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,13,14,15,16};
    int row = 4, col = 4;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Output is:"<<endl;
     int j = 0;
    for (int i = 0; i < col; i++)
    {
       
        if (i&1)
        {
            for (j = row-1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
     
        else
        {
            for (int k = 0; k < row; k++)
            {
                cout << arr[k][i] << " ";
            }
        }
    }

    return 0;
}