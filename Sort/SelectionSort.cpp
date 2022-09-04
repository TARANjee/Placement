#include <iostream>
using namespace std;
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5,min=0;
    for (int i = 0; i < n - 1; i++)
    {
       min=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
               
            }
        }
         swap(arr[i],arr[min]);
        
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}