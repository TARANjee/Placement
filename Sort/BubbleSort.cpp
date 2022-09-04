#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4,3,2,1};
    int n = 4;
    for (int i = 1; i <=n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i ; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}