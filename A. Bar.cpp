#include <iostream>
#include <string>
using namespace std;

bool check_number(string str) {
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}

int main()
{
	int n,ll,count1=0,count2=0;
	cin >> n;
	string s;

	for (int i = 0; i < n; i++)
	{
		cin >> s;

		if (check_number(s)) {
			ll = stoi(s);
			if (ll < 18) count1++;
		}
		if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE"
				|| s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE") {
				count2++;
		}
	}
	cout << (count1 + count2) << endl;
	return 0;
}