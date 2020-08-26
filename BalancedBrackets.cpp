#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

int valid(string s1, string s2, int ia1, int ia2, int ib, int longest)
{
    if (s1.size() - 1 == ia1)
    {
        return 0;
    }
    if (s1.size() - 2 > ia2 && s2.size() - 2 > ib && s1.at(ia2) == s2.at(ib))
    {
        valid(s1, s2, ia1, ia2++, ib++, longest++);
    }
    else if (s1.at(ia2) != s2.at(ib) && s1.size() - 1 > ia1)
    {
        longest = max(valid(s1, s2, ia1, ia1, ib, 0), valid(s1, s2, ia1++, ia1++, 0, 0));
    }

    return longest;
}

int main()
{
    cout << valid("abcdefg", "abcdxxxxabcdefg", 0, 0, 0, 0);
}