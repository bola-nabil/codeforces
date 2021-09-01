#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,ss;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
			ss += "0";
		if (s[i] == '-' && s[i + 1] == '.')
		{
			ss += "1";
			i++;
		}
		if (s[i] == '-' && s[i + 1] == '-')
		{
			ss += "2";
			i++;
		}
	}

	cout << ss << endl;
	return 0;
}