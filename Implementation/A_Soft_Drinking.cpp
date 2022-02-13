#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ans1 = (k * l) / nl;
    int ans2 = c * d;
    int ans3 = p / np;
    int ans4 = min(ans1, ans2);
    int ans5 = min(ans4, ans3);

    cout << ans5 / n << "\n";

    return 0;
}