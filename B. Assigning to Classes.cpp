#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int m = 2 * n;
        int* arr = new int[m];

        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + m);
        cout << abs(arr[n - 1] - arr[n]) << endl;
    }
    return 0;
}