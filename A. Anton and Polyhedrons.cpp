#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; cin >> n;
	int sum = 0, c = 0;
	string s;


	for (int i = 0; i < n; i++)
	{
		cin >> s;

		if (s == "Tetrahedron") c = 4;
		if (s == "Cube") c = 6;
		if (s == "Octahedron") c = 8;
		if (s == "Dodecahedron") c = 12;
		if (s == "Icosahedron") c = 20;
		sum += c;
	}
	cout << sum << endl;
	return 0;
}