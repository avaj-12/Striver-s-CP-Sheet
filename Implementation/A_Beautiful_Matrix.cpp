#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);

    int a, b;
    int num[100][100];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> num[i][j];
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (num[i][j] == 1)
            {
                a = abs(i - 3);
                b = abs(j - 3);
                break;
            }
        }
    }

    cout << a + b << "\n";

    return 0;
}