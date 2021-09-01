#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a(3);
    int n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(rall(a));
    n = n - (a[0] - a[1]);
    n = n - (a[0] - a[2]);

    if (n < 0) {
        cout << "NO" << endl;
        return;
    }
    if (n % 3 == 0) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    cout << "hello10" << endl;
    	return 0;
}