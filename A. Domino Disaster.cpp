#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char* ch = new char[n];
        for (int i = 0; i < n; i++)
            cin >> ch[i];
        for (int i = 0; i < n; i++)
        {
            if (ch[i] == 'U')
                cout << "D";
            else if (ch[i] == 'D')
                cout << "U";
            else cout << ch[i];
        }
        cout << endl;
    }
    return 0;
}