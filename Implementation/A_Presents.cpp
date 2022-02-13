#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{

    int n;
    cin >> n;
    int num[n + 1], ans[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        ans[num[i]] = i; // imp
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}