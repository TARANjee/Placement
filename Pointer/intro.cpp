#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;
    // address of num
    cout << "Address of num: " << &num << endl;

    int *ptr = &num;

    cout << "value of  ptr: " << *ptr << endl;
    cout << "Address of  ptr: " << ptr << endl;

    double d = 4.2;
    double *p2 = &d;
    cout << "size of integer: " << sizeof(num) << " bytes" << endl;
    cout << "size of ptr: " << sizeof(ptr) << " bytes" << endl;
    cout << "size of ptr2: " << sizeof(p2) << " bytes" << endl;

    return 0;
}