#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{

    long long int k, n, w, sum = 0;
    cin >> k >> n >> w;
    while (w != 0)
    {
        sum = sum + w * k;
        w--;
    }
    if (sum - n < 0)
        cout << "0"
             << "\n";
    else
        cout << sum - n << "\n";

    return 0;
}