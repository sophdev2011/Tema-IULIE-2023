#include <iostream>

using namespace std;

int main()
{
    int n, x, max = 0, ap = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            ap = 1;
        }
        else
        {
            if (max == x)
            {
                ap++;
            }
        }
    }
    cout << max << " " << ap;
}
//https://www.pbinfo.ro/probleme/346/maxandap