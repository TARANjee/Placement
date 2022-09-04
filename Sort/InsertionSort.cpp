#include <iostream>
using namespace std;
int main()
{
    int arr[] = {15, 5, 1, 9, 3, 7};
    int n = 6;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j >= 0)
        {
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}