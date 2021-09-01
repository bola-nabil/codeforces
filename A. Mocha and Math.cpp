#include <iostream>
using namespace std;

int main() {

    long long int  t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        long long int *arr= new long long int[n];

        for (int  i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long int count = arr[0];

        for (int  i = 1; i < n; i++) {
            count = count & arr[i];
        }

        cout << count << endl;
    }

    return 0;
}