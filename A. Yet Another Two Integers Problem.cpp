#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	long long int a, b;
	int count = 0;
	while (t--)
	{
		cin >> a>> b;
		if (a == b)
			cout << "0" << endl;
		else if (abs(a - b) % 10 == 0)
			cout << abs(a - b) / 10 << endl;
		else
			cout << (abs(a - b) / 10) + 1 << endl;
	}
	return 0;
}