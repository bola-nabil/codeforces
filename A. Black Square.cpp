#include <iostream>
#include <string>
using namespace std;

int main()
{
	long int a1, a2, a3, a4,count =0;
	string s;

	while (cin >> a1 >> a2 >> a3 >> a4)
	{
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '1')
				count += a1;
			else if (s[i] == '2')
				count += a2;
			else if (s[i] == '3')
				count += a3;
			else if (s[i] == '4')
				count += a4;
		}
		cout << count << endl;
	}
	return 0;
}