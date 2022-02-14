#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{

    string s;
    cin >> s;
    string a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int count = 0;

    if (s.at(0) == a.at(0) || s.at(0) == b.at(0) || s.at(0) == c.at(0) || s.at(0) == d.at(0) || s.at(0) == e.at(0))
    {
        count++;
    }
    else if (s.at(1) == a.at(1) || s.at(1) == b.at(1) || s.at(1) == c.at(1) || s.at(1) == d.at(1) || s.at(1) == e.at(1))
    {
        count++;
    }

    if (count > 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}