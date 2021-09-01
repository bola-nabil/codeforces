#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<char, bool> m;
        bool flag = true;
        char lastc = ' ';

        for (int i = 0; i < n; i++) {
            char ch;
            cin >> ch;
            if (!m[ch] || lastc == ch) m[ch] = 1;
            else flag = 0;
            lastc = ch;
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}