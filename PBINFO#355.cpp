#include <iostream>

using namespace std;

int main()
{
    int n, min, a;
    cin >> n >> min;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        if (a < min)
            min = a;
    }
    cout << min;
    return 0;
}
//https://www.pbinfo.ro/probleme/355/