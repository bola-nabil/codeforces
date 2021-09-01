#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	long long n;

	while (t--)
	{
		cin >> n;
		int count = n/2;

		if (n % 2 == 1)
			count++;

		cout << count << endl;
	}
	return 0;
}