#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {
        if (!arr[i])
        {
            for (int j = i; j <= n; j += i)
                arr[j]++;
        }
    }

    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 2)
            ans++;
    }

    cout << ans << endl;
    return 0;
}
