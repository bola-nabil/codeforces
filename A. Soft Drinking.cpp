#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, l, c, d, p, nl, np;
	cin >> n>> k>> l>> c>> d>> p>> nl>> np;

	int k1 = (k * l) / nl;
	int k2 = (c * d);
	int k3 = (p / np);

	cout << min({ k1,k2,k3 }) / n << endl;
	return 0;
}