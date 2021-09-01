#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int ma = 101; // min number
	int mx = 0; // max number
	int mai=0, mxi=0; // max index  min index

	for (int i = 0; i < n; i++) // find max number and min number
	{
		if (arr[i]<=ma) {
			ma = arr[i];
			mai = i;
		}

		if (arr[i]>mx) {
			mx = arr[i];
			mxi = i;
		}

	}

	if (mxi > mai)
		mai++;
	cout << mxi + (n - 1) - mai << endl; // output(short time)

	return 0;
}