#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a, b;

	while (t--)
	{
		cin >> a >> b;
		int len = max(a, b);
		int wid = min(a, b);
		
		if (wid * 2 < len)
			cout << (len * len) << endl;
		else
		{
			wid *= 2;
			cout << (wid * wid) << endl;
		}
	}
	return 0;
}