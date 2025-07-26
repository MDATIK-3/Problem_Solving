#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    string str;
    cin >> str;

    sort(str.begin(), str.end());

    if (str[0] == 48) {
        for (int i = 1; i < 4; i++) {
            if (str[i] != 48) {
                swap(str[0], str[i]);
                break;
            }
        }
    }

    cout << str << endl;
    return 0;
}
