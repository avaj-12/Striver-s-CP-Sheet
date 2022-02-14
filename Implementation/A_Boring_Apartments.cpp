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
        int n, sum = 0;
        cin >> n;

        int rem = n % 10;
        int digit = log10(n) + 1;
        // cout << digit << "\n";

        while (rem - 1 != 0)
        {
            for (int i = 1; i <= 4; i++)
            {
                sum += i;
            }
            rem--;
        }
        for (int i = 1; i <= digit; i++)
        {
            sum = sum + i;
        }
        cout << sum << "\n";
    }
    return 0;
}