#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    string s, d = "";
    cin >> s;

    set<string> a;
    for (int i = 0; i < s.size(); i++)
    {
        d = s.at(i);
        a.insert(d);
    }
    if (a.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}