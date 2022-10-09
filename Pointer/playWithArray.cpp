#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {4,6,8};
    cout << "address of first element: " << arr << endl;
    cout << "value of arr[0]: " << arr[0] << endl;
    cout << "address of arr[0]: " << &arr[0] << endl;
    cout << "*arr: " << *arr << endl;
    cout << "4 + 1:" << *arr + 1<< endl;
    cout << "6th : " << *(arr+1)<< endl;
    cout << "*(i+arr): " << 2[arr]<< endl;
    char temp='g';
    char *ch=&temp;
    cout<<ch<<endl;
}