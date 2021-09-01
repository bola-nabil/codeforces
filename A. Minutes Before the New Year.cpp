#include <iostream>
using namespace std;

int main()
{
    int t, h, m;
    cin >> t;
    int hh = 0, mm = 0;
    while (t--)
    {
        cin >> h >> m;
        hh = 24 - h;
        mm = 60 - m;
        if (hh == 1)
            cout << mm << endl;
        else
            cout << (hh * 60) - m << endl;
    }

    return 0;
}