#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int mindif = 1000;

    sort(arr.begin(), arr.end());
    int j;
    for (int i = 0; i < n - 1; ++i)
    {
        j = arr[i] - arr[i + 1];
        if (abs(j) < mindif)
            mindif = abs(j);
    }
    cout << mindif << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
        solve();
	}
	return 0;
}