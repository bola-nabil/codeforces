#include <iostream>
using namespace std;

void solve()
{
	long long int n, x, count = 0;
	cin >> n;
	x = n / 100;
	count += x;
	n %= 100;
	x = n / 20;
	count += x; n %= 20;
	x = n / 10;
	count += x; n %= 10;
	x = n / 5;
	count += x; n %= 5;
	x = n;
	count += x;
	cout << count << endl;
}

int main()
{
	solve();
	return 0;
}