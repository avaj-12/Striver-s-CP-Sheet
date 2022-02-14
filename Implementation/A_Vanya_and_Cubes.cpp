#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    int count = 0;

    for (i = 1; i <= n; i++)
    {
        count += ((i * (i + 1)) / 2);
        if (count > n)
            break;
    }
    cout << i - 1;

    return 0;
}