#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    long long int n, count = 0;
    cin >> n;
    long long int temp = floor(log10(n) + 1);

    while (n != 0)
    {
        long long int rem = n % 10;
        if (rem == 4 || rem == 7)
        {
            count++;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}