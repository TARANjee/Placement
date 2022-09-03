#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentcnt=1;
    int pgSum=0;
    for (int i = 0; i < n; i++)
    {
        if(pgSum+arr[i]<=mid){
            pgSum=pgSum+arr[i];
        }
        else{
            studentcnt++;
            if(studentcnt >m ||arr[i]>mid ){
                return false;
            }
            pgSum=arr[i];
        }
    }
    
    return true;
}
int main()
{
    int page[] = {10, 20, 30, 40,50};
    int n = 5, m = 6; // m is student
    int ans = -1;
    int sum =0;
    for(int i=0;i<n;i++){
        sum +=page[i];
    }
 
    int s = 0, e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(page, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;

    return 0;
}
