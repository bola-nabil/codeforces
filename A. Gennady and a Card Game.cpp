#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,s1; cin >> s;
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> s1;
		if (s[0] == s1[0] || s[1] == s1[1])
			count = 1;
	}

	if (count)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}