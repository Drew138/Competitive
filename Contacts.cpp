#include <bits/stdc++.h>
#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

void Contacts()
{
    set<string> names;
    int numOperations;
    cin >> numOperations;
    while (--numOperations + 1)
    {
        string operation, context;
        cin >> operation >> context;

        if (operation == "add")
        {
            names.insert(context);
        }
        else if (operation == "find")
        {
            int total = 0;
            for (const string &name : names)
            {
                int matches = 0;
                if (context.size() <= name.size())
                {
                    for (int i = 0; i < context.size(); ++i)
                    {
                        matches += context[i] == name[i];
                    }
                }
                if (matches == context.size())
                {
                    total++;
                }
            }
            cout << total << endl;
        }
    }
}

int main()
{
    Contacts();
}
