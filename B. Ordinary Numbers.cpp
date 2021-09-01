#include <iostream>
#include <string>
#define ll long long 
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;

        string s = to_string(n);

        string str = "";

        for (ll i = 1; i <= s.length(); i++)
            str += s[0];

        ans += (s.length() - 1) * 9;

        ans += (s[0] - '0');

        if (stoll(str) > stoll(s))ans--;

        cout << ans << endl;

    }
    return 0;
}