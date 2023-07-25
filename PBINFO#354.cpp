#include <iostream>

using namespace std;

int main()
{
    int n, max = 0, a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > max)
            max = a;
    }
    cout << max;
    return 0;
}
//https://www.pbinfo.ro/probleme/354/n-maxim