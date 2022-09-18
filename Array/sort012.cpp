#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 2, 1, 2, 0, 1};
    int n = 7;
    int mid = 0, low = 0, high = n-1;
  
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
    // int zero, one, two;
    // zero = one = two=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         zero++;
    //     else if (arr[i] == 1)
    //         one++;
    //     else
    //         two++;
    // }
    // for (int i = 0; i < zero; i++)
    //     arr[i] = 0;
    // for (int i = zero; i < zero + one; i++)
    //     arr[i] = 1;
    // for (int i = zero + one; i < n; i++)
    //     arr[i] = 2;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}