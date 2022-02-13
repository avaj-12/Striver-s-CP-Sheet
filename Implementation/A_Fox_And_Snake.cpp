#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 1) // odd lines
            {
                cout << "#";
            }
            if (i % 2 == 0 && i % 4 != 0) // even lines
            {
                if (j == m)
                    cout << "#";
                else
                    cout << ".";
            }
            if (i % 4 == 0)
            {
                if (j == 1)
                    cout << "#";
                else
                    cout << ".";
            }
        }

        cout << "\n";
    }

    return 0;
}