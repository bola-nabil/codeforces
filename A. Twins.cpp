#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    int sum = 0, count = 0,sum2=0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum /= 2;
    sort(arr, arr + n);
    for (int i = (n - 1); i >= 0; i--)
    {
        sum2 += arr[i];
        ++count;
        if (sum2 > sum) 
            break;
    }

    cout << count << endl;
    return 0;
}