#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int  x, a, b;
		cin >> a >> b;

		x = sqrt((a * a) + (b * b));
		if (a == 0 && b == 0)
			cout << 0 << endl;
		else if ((x * x) == ((a * a) + (b * b)))
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}
	return 0;
}