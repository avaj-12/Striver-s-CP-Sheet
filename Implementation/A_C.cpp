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
        for (int i = 1; i <= 100000; i++)
        {
            if (a > b)
            {
                if (n > a)
                {
                    break;
                }
                else
                {
                    a = a + b;
                    count += 1;
                }
            }
            else
            {
                if (n > b)
                {
                    break;
                }
                else
                {
                    b = b + a;
                    count += 1;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}