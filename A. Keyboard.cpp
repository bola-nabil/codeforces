#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,sol,ss;
	char ch;
	ss = "qwertyuiopasdfghjkl;zxcvbnm,./";

	cin >> ch;
	cin >> s;
	
	for (int i = 0; i < s.length(); i++)
	{
		int index = ss.find(s[i]);
		if (ch == 'R') 
			sol += ss[index - 1];

		else
			sol += ss[index + 1];
	}
	cout << sol << endl;
	return 0;
}