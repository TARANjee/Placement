#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = { 0,1};
    int n = 2, cnt = 0, num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if (cnt == arr[j]){
                cnt++;
                break;
            }
            num=cnt;
        }
    }
    cout<<num;
    return 0;
}