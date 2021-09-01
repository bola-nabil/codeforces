#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   cin >> s;
   if (s.find("0000000") < 100 || s.find("1111111") < 100) 
	   cout << "YES";
   else
       cout << "NO";
    return 0;
}