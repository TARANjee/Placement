#include <iostream>
using namespace std;

int main()
{
    // pointer to int is created, and point to garbage address
    // int *p;
    /* int *p = 0; // Segmentation fault

     cout << *p << endl;
 */

    // call by value
    /*
        int a = 10;
        int b = a; // value is copy;
        b++;
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
    */
    // call by reference
    /*
        int a = 10;
        int *b = &a; // address is copy;
        (*b)++;
        cout << "a= " << a << endl;
        cout << "b= " << *b << endl;
      */

    // copying a pointer
    int x = 6;
    int *p = &x;
    (*p)++;
    int *q = p;

    //cout << "*p=" << *p << endl;
   // cout << "q=" << q << endl;
   // cout << "*q=" << *q << endl;

    // double pointer
    int **t = &p; //pointer to pointer
    cout << "&x= " << &x << endl;
    cout << "p= " << p << endl;
    cout << "*t= " << *t << endl;
    cout << "x= " << x << endl;
    cout << "*p= " << *p << endl;
    cout << "**t= " << **t << endl;

    return 0;
}