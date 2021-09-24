#include <iostream>
using namespace std;

void solve()
{
    int n, c = 1, l = 1;
    cin >> n;
    while (n - c >= 0)
    {
        n -= c;
        l++;
        c += l;

    }
    cout << (l - 1);
}

int main()
{
    solve();
	return 0;
}
