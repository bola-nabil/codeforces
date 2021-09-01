#include <iostream>
using namespace std;

int main()
{
	int n, m, color=0;
	cin >> n >> m;
	char ch;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ch;
			if (ch == 'C' || ch == 'M' || ch == 'Y') {
				color = 1;
				break;
			}
		}
		if (color == 1)
			break;
	}

	if (color == 1)
		cout << "#Color" << endl;
	else
		cout << "#Black&White" << endl;

	return 0;
}