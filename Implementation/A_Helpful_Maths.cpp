#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    cin.tie(NULL);
    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 1; i++)
    {
        for (int j = 0; j < s.size() - 1; j++)
        {
            if (s.at(j) != '+')
            {
                if (s.at(j) > s.at(j + 2))
                {
                    swap(s.at(j), s.at(j + 2));
                }
            }
        }
    }
    cout << s;

    return 0;
}