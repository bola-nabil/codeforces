#include <iostream>
#include<string>
using namespace std;

int main()
{
	string color = "ROYGBIV";
	int n;
	cin >> n;
	int k = 0;
	for (int i = 0; i < n; ++i) {
		cout << color[k++];
		if (k == 7)
			k -= 4;
	}
	return 0;
}