#include <iostream>
using namespace std;

int main()
{
	int n = 50;
	bool *prime = new bool [n+1];
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0) {
			prime[i] = false;
		}
		else 
			prime[i] = true;
	}
	prime[0] = prime[1] = false;
	prime[2] = true;

	for (int i = 3; i * i <= n; i += 2)
	{
		if (prime[i] == false) continue;
		for (int j = i * i; j <= n; j += (i + i))
		{
			prime[j] = false;
		}
	}

	int a, b;
	cin >> a >> b;
	int c = 0;

	for (int i = (a + 1); i < n; i++)
	{
		if (prime[i]) {
			c = i;
			break;
		}
	}
	if (c == b) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}