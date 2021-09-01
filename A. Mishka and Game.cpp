#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int m = 0, c = 0;
	for (int i = 0; i < n; i++)
	{
		int mi, ci;
		cin >> mi >> ci;
		if (mi > ci) m++;
		if (ci > mi) c++;
	}

	if (m > c) cout << "Mishka" << endl;
	else if (c > m) cout << "Chris" << endl;
	else if (m == c) cout << "Friendship is magic!^^" << endl;
	return 0;
}