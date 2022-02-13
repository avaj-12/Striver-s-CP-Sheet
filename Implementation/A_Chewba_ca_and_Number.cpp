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

    // check for first digit(fd)
    int fd = s[0] - '0';

    if (fd == 9)
    {
        s[0] = '9';
    }
    else
    {
        if (fd > 4)
        {
            s[0] = (9 - fd) + '0';
        }
    }

    for (int i = 1; i < s.size(); i++)
    {
        int a = s[i] - '0'; // convert the ith string to number(from second digit to last)
        if (a > 4 && a != 0)
        {
            s[i] = ((9 - a) + '0');
        }
    }
    cout << s << endl;

    return 0;
}