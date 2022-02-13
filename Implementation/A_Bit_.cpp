#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        char a, b, c;
        cin >> a >> b >> c;

        if (b == '+')
            count += 1;
        else if (b == '-')
            count -= 1;
    }
    cout << count << "\n";
    return 0;
}