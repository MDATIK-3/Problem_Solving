#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long x = (n * (n + 1)) / 2;
    long long y = (m * (m + 1)) / 2;

    long long ans = x * y;

    cout << ans << endl;

    return 0;
}
