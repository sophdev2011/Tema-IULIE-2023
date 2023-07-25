#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, x, nr, maxi;
    cin >> x;
    maxi = INT_MIN;
    while (x != 0)
    {
        if (x > maxi)
        {
            maxi = x;
            nr = 1;
        }
        else if (x == maxi)
        {
            nr++;
        }
        cin >> x;
    }
    if (maxi == INT_MIN)
        cout << "NU EXISTA";
    else
        cout << maxi;
    return 0;
}
// https://www.pbinfo.ro/probleme/54/maxim