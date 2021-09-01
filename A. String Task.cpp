#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,ss;
	cin >> s;
	int size = s.length();

	for (int i = 0; i < size; i++)
	{
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'O' || s[i] == 'o' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'U' ||
			s[i] == 'u' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i')
		{
			continue;
		}
		else
		{
			ss += '.';
			ss += towlower(s[i]);
		}
	}
	cout << ss;
	return 0;
}