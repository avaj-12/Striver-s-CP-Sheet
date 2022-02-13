#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{

    int n, count = 1, an = 1;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] < num[i + 1])
        {
            count++;
            if (an < count)
            {
                an = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << an;

    return 0;
}