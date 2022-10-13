#include <iostream>
using namespace std;
int search(int arr[], int size, int target)
{
    // Base case
    if (size == 0)
        return 0;
    if (arr[0] == target)
        return true;
    else{
        bool remainingPart=search(arr+1,size-1,target);
        return remainingPart;
    }
        
   
}
int main()
{
    int arr[] = {1, 7, 3, 9, 5};
    int size = 5;
    int tar = 51;
    if (search(arr, size, tar))
        cout << "Element found";
    else
    {
        cout << "Element not found";
    }
    return 0;
}