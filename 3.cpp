#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    if (k == 1)
    {
        cout << (n != 1 ? -1 : 0) << endl;
        return 0;
    }

    if ((n - 1) % (k - 1) == 0)
    {
        if (n >= 1)
        {
            ll t = (n - 1) / (k - 1);
            cout << t << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}