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

    s[0] = toupper(s[0]);
    cout << s << "\n";

    return 0;
}