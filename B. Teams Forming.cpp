#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        sum = sum + v[i + 1] - v[i];
    }
    cout << sum << endl;
    return 0;
}