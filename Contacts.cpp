#include <bits/stdc++.h>
#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

void Contacts()
{
    vector<string> names;
    int numOperations;
    cin >> numOperations;
    while (numOperations--)
    {
        string operation, context;
        cin >> operation >> context;

        if (operation == "add")
        {
            names.push_back(context);
        }
        else if (operation == "find")
        {
            int total = 0;
            for (int x = 0; x < names.size(); ++x)
            {
                int matches = 0;
                if (context.size() <= names[x].size())
                {
                    for (int i = 0; i < context.size(); ++i)
                    {
                        if (context[i] == names[x][i])
                        {

                            matches += context[i] == names[x][i];
                        }
                        else
                        {
                            break;
                        }
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
