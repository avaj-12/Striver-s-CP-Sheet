#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);

    int n, ans = 0;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] == 1)
        {

            ans = 1;
            break;
        }
    }
    if (ans == 1)
        cout << "HARD"
             << "\n";
    else
        cout << "EASY"
             << "\n";

    return 0;
}