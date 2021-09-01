#include <iostream>
using namespace std;

int main()
{
   
    int t,x,y,z;
    int sum_x=0, sum_y=0, sum_z = 0;
    string s;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;

        if (sum_x == 0 && sum_y == 0 && sum_z == 0)
            s = "YES";
        else
            s = "NO";
    }
    cout << s << endl;
    return 0;
}