#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    if (x1 > x2)
    {
        swap(x1, x2);
    }
    if (x1 > x3)
    {
        swap(x1, x3);
    }
    if (x2 > x3)
    {
        swap(x2, x3);
    }

    cout << abs(x2 - x1) + abs(x3 - x2) << "\n";

    return 0;
}