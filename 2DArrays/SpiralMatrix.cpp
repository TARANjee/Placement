#include <iostream>

using namespace std;
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3, col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Spiral Matrix"<<endl;
   
int count=0;
int total=row*col;
//index
int startingRow=0;
int startingCol=0;
int endingRow=row-1;
int endingCol=col-1;

while(count<total){
    //starting row
    for (int index = startingCol; index <= endingCol; index++)
    {
       cout<<arr[startingRow][index];
       count++;
    }
    startingRow++;
    //ending Col
    for (int index = startingRow; index <=endingRow; index++)
    {
       cout<<arr[index][endingCol];
        count++;
    }
    endingCol--;
     //ending row
    for (int index = endingCol; index >= startingCol; index--)
    {
       cout<<arr[endingRow][index];
        count++;
    }
    endingRow--;
    //starting Col
    for (int index = endingRow; index >= startingRow; index)
    {
       cout<<arr[index][startingCol];
        count++;
    }
    startingCol++;
    
}

    return 0;
}