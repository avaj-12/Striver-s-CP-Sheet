#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);
    int t, ans = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
            ans += 20;
        else if (s == "Cube")
            ans += 6;
        else if (s == "Dodecahedron")
            ans += 12;
        else if (s == "Octahedron")
            ans += 8;
        else if (s == "Tetrahedron")
            ans += 4;
    }
    cout << ans << "\n";
    return 0;
}