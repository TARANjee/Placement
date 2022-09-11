#include <iostream>
using namespace std;

void mergeSecond(int arr1[], int m, int arr2[], int n)
{
    int i=m-1,j=n-1;
    int k=m+n-1;
   while(j>=0)
    {
        if (arr1[i] < arr2[j])
        {
            arr1[k] = arr2[j];
            k--;
            j--;
        }
        else
        {
            arr1[k]=arr1[i];
            k--;
            i--;
        }
    }
}

int main()
{
    int arr1[] = {1,4,6,10,0,0};
    int arr2[] = {2,5};

    mergeSecond(arr1, 4, arr2, 2);

    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}