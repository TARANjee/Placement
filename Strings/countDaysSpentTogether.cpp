#include <iostream>
using namespace std;
int matchPlayersAndTrainers(int players[], int trainers[])
{
    int i = 0, j = 0;
    int n = 2;
    int cnt = 0;
    while (j < n)
    {
        if (players[i] <= trainers[j])
        {
            cnt++;
            i++;
            j++;
        }
          if (players[i] > trainers[j])
        {
            j++;
        }
    }
    return cnt;
}
int main()
{
    int ply[] = {1,1000000};
    int trainer[] = {1000000,1};
    int count = matchPlayersAndTrainers(ply, trainer);
    cout << count;
    return 0;
}