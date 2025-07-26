#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    ll res = 0, num = 0;
    char ch = '+';

    for (char c : str)
    {
        if (c >= '0' && c <= '9')
        {
            num = num * 10 + (c - '0');
        }
        else
        {
            if (ch == '+')
            {
                res += num;
            }
            else
            {
                res -= num;
            }

            ch = c;
            num = 0;
        }
    }

    if (ch == '+')
    {
        res += num;
    }
    else
    {
        res -= num;
    }

    cout << res;
}
