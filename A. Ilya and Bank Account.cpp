#include <iostream>
using namespace std;

int main()
{
	long long int n,n1,n2;
	cin >> n;
	n1 = n / 10; // remove last number
	n2 = n / 100 * 10 + n % 10; // remove befor last number
	if (n >= 0) cout << n << endl;
	else cout << max(n1, n2) << endl;
	return 0;
}