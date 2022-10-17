#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainIdx = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIdx++];
    }
    mainIdx = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIdx++];
    }
    // merge two sorted array
    int i = 0, j = 0;
    mainIdx = s;
    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
            arr[mainIdx++] = first[i++];
        else
            arr[mainIdx++] = second[j++];
    }
    while (i < len1)
        arr[mainIdx++] = first[i++];
    while (j < len2)
        arr[mainIdx++] = second[j++];

    delete[] first;
    delete[] second;
}
void mergesort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;
    // left part
    mergesort(arr, s, mid);
    // right part
    mergesort(arr, mid + 1, e);
    // merge to sorted array
    merge(arr, s, e);
}
int main()
{
    int arr[5] = {60, 86, 21, 12, 28};
    int n = 5;
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
