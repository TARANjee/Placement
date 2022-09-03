#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int k=3;
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(4);
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"After Swap"<<endl;
    for(int j=k+1,k=n-1;j<=k;j++,k--){
         swap(arr[j],arr[k]);
    }
  

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}