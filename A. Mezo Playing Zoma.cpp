#include <iostream>
#include <string>
using namespace std;

int main()
{

	int num,left=0,right=0;
	string s;

	cin >> num >> s;

	for (int i = 0; i < num; i++)
	{
		if (s[i] == 'L')
			left++;
		if (s[i] == 'R')
			right++;
	}

	cout << (left + right + 1) << endl;
	return 0;
}