#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;

	int d1 = max({x1,x2,x3});
	int d2 = min({x1,x2,x3});

	cout << (d1 - d2) << endl;
	return 0;
}