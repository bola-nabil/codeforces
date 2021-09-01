#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int>g;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        g.push_back(k);
    }
    sort(g.begin(), g.end());

    for (int i = 0; i < n; i++)
        cout << g[i] << " ";

    return 0;
}