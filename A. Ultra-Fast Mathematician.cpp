#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, ss;
    cin >> s >> ss;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ss[i])
            s[i] = '0';
        else
            s[i] = '1';
    }
    
    cout << s << endl;
    return 0;
}