#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    int n;
    cin >> str >> n;

    vector<ll> arr(3, 0);

    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        arr[str[i] - '1']++;
    }

    while (n--)
    {
        vector<ll> brr(3);
        brr[0] = arr[1];
        brr[1] = arr[0] + arr[2];
        brr[2] = arr[0];
        arr = brr;
    }

    cout << arr[0] << " " << arr[1] << " " << arr[2];

    return 0;
}
