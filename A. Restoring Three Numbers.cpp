#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
	ll* x = new ll[4];
	ll a, b, c;

	for (int i = 0; i < 4; i++)
		cin >> x[i];
	sort(x, x + 4);

	a = x[3] - x[0];
	b = x[3] - x[1];
	c = x[3] - x[2];

	cout << a << " " << b << " " << c << endl;
	return 0;
}