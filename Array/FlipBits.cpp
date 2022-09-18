#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0,0,1,0,0};
    int n = 5;
    // count for counting zeros and x for count ones.

    int count = 0, maxcount = 0, one = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)

            count++;

        else

        {

            count--;

            one++;
        }

        if (count > maxcount)

            maxcount = count;

        if (count < 0)

            count = 0;
    }

    cout<< maxcount + one;
}


