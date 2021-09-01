#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    char ch = 'A';
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++) 
        s[i] = toupper(s[i]);
    

    if (n >= 26) {
        for (int i = 0; i < 26; i++) {
            if (s.find(ch) != -1) {
                ch++;
            }
            else {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else 
        cout << "NO";

    return 0;
}