#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double p = 3.14159265358979323846;
    double e = 1e-12;

    for (int k = 0; k < n; k++)
    {
        double x = 2.0 * p * k / n;
        double a = cos(x);
        double b = sin(x);

        if (a < e && a > -e)
            a = 0.0;
        if (b < e && b > -e)
            b = 0.0;

        cout << fixed << setprecision(10) << a << " " << b << endl;
    }

    return 0;
}