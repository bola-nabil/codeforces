#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    int  seg = 0,count =0;
    long long int l, r;

    cin >> n;
    long long int* a = new long long int[n];
    long long int* s = new long long int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
    }

    sort(s, s + n);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == a[i])
            count++;
    }

    if (count == n)
    {
        cout << "yes\n1 1";
        return 0;
    }

    for (int i = 0; i < n - 1, seg < 1;)
    {
        if (a[i] < a[i + 1])
        {
            i++;
        }

        else
        {
            l = i;
            r = i;
            while (a[i] > a[i + 1] && i < n - 1)
            {
                i++;
                r++;
            }

            sort(a + l, a + r + 1);
            seg++;
        }
    }


    for (int i = 0; i < n; i++)
    {
        if (s[i] != a[i])
        {
            cout << "no";
            return 0;
        }
    }

    cout << "yes\n" << l + 1 << " " << r + 1;

    return 0;
}