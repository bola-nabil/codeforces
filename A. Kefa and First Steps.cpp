#include <iostream>
using namespace std;

int main()
{
	int n,x1=1,x2=1;
	cin >> n;
	long long int* a = new long long int[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		if (i > 0)
		{
			if (a[i] >= a[i - 1])
			{
				x1++;
				x2 = max(x2, x1);
			}
			else
			    x1= 1;
		}
	}

	cout << x2 << endl;
	return 0;
}