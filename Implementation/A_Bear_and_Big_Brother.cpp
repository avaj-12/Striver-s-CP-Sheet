#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;

    for (int i = 1; i <= 10000000; i++)
    {
        if (a <= b)
        {
            a = a * 3;
            b = b * 2;
            count++;
        }
        else
            break;
    }

    cout << count << "\n";
    return 0;
}