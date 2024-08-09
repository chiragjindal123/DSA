#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, i;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int arr[b - a + 1];

        for (i = 0; i < b - a + 1; i++)
        {
            arr[i] = a + i;
        }

        int j = b - a, count = 0;
        if (a < 3)
        {
            count++;
            arr[1] *= 3;
            for (i = 1; i < b - a + 1; i++)
            {
                while (1)
                {
                    arr[i] /= 3;
                    count++;
                    if (arr[i] == 0)
                        break;
                }
            }
        }

        else
        {
            for (i = 0; i < (b - a + 1); i++)
            {
                if (i != j)
                {
                    arr[i] *= 3;
                    arr[j] /= 3;
                    count++;
                    if (arr[j] == 0)
                        break;
                }
                if (i = b - a)
                    i = -1;
            }
            for (i = 0; i < b - a; i++)
            {
                while (1)
                {
                    arr[i] /= 3;
                    count++;
                    if (arr[i] == 0)
                        break;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}