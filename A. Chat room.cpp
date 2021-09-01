#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,ss = "hello";
    cin >> s;
    int x = 0, count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ss[x])
        {
            x++;
            count++;

            if (count == 5)
                break;
        }
    }
    if (count == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}