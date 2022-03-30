#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int a, b, n;
		cin >> a >> b >> n;

		int count = 0;
		while (max(a, b) <= n)
		{
			if (a < b)
				a += b;
			else
				b += a;

			count++;
		}
		cout << count << endl;
	}
}