#include <iostream>
#include <string>
using namespace std;


int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int count = 0, start = 0, end = 0;

        for (int i = 0; i< n; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b' || s[i] == 'b' && s[i + 1] == 'a')
            {
                count++;
                start = i; end = i;
            }
            if (count == 1)
                break;
        }
        if (count == 0)
            cout << -1 << " " << -1 << endl;
        else
            cout << start + 1 << " " << end + 2 << endl;
    }
    return 0;
}