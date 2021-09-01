#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b;
	int r1=0, r2=0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		r1 -= a;
		r1 += b;
		r2 = max(r2, r1);
	}
	cout << r2 << endl;
	return 0;
}