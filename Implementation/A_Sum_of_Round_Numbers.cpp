#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num[n + 1];
        int j = 0, i = 1;

        while (n != 0)
        {
            int rem = n % 10;
            n = n / 10;
            if (rem == 0)
            {
                i *= 10;
                continue;
            }
            else
            {
                num[j] = rem * i;
            }

            i = i * 10;
            j++;
        }
        int a = j;
        cout << a << "\n";
        for (int j = 0; j < a; j++)
        {
            cout << num[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}