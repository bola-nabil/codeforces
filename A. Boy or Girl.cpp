#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.length();
    int count = 0;
    sort(s.begin(), s.end());
    for (int i = 1; i < size; i++)
    {
        if (s[i] != s[i - 1]) count++;
    }
   
    if (count & 1)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}