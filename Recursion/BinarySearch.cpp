#include <iostream>
using namespace std;
bool search(int arr[], int s, int e, int target)
{

    // Base case

    //element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    //element found
    if (arr[mid] == target)
        return true;

    if ( arr[mid]<target)
        return search(arr, mid + 1, e, target);
    else
        return search(arr, s, mid - 1, target);
}
int main()
{
    int arr[] = {1,2,5,7,9};
    int size = 5;
    int tar = 1;
    
   
    if (search(arr, 0, 4, tar))
        cout << "Element found";
    else
        cout << "Element not found";
    
    return 0;
}