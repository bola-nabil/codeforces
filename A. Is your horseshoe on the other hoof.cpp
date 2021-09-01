#include <iostream>
using namespace std;

int main()
{
	long long int arr[4];
    int size = 4;
    int count = 0, i, j;

	for (i = 0; i < 4; i++) {
		cin >> arr[i];

	}
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            /* If duplicate found then increment count by 1 */
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
	cout << count << endl;
}