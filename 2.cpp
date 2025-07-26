#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 1;

    for (int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            n /= i;
            cnt++;
        }
        if (cnt % 2)
            p *= i;
    }

    if (n > 1)
        p *= n;

    cout << p << endl;
    return 0;
}
