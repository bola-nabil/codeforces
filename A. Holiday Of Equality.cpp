#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int* arr = new int[n];
	int mx = 0,sum=0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (mx < arr[i]) {
			mx = arr[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		sum += (mx - arr[i]);
	}
	cout << sum << endl;
	return 0;
}