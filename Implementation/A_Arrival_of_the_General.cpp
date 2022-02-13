#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);

    int n, max = INT_MIN, min = INT_MAX, ma, mi, count = 0;
    cin >> n;
    int num[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        if (num[i] > max)
        {
            max = num[i];
            ma = i;
        }
        if (num[i] <= min)
        {
            min = num[i];
            mi = i;
        }
    }

    // cout << ma << " " << mi << " ";
    if (ma > mi)
        cout << (ma - 1 + n - mi - 1);
    else
        cout << (ma - 1) + (n - mi);

    return 0;
}