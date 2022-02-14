#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, ans, count = 0;
        cin >> a >> b >> n;

        while (a <= n && b <= n)
        {
            if (a > b)
            {
                b += a;
                count++;
            }
            else
            {
                a += b;
                count++;
            }
        }

        cout << count << "\n";
    }
    return 0;
}