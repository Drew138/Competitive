#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

int main()
{
    int numStrings;
    cin >> numStrings;
    unordered_set<char> opening{'(', '[', '{'};
    for (int i = 0; i < numStrings; ++i)
    {
        string brackets;
        stack<char> bracketsStack;
        cin >> brackets;
        for (int j = 0; j < brackets.size(); ++j)
        {
            char character = brackets.at(j);
            bool isAddStack = opening.find(character) != opening.end();
            if (isAddStack)
            {
                bracketsStack.push(character);
            }
            else if (bracketsStack.top() == '[' && character == ']')
            {
                bracketsStack.pop();
            }
            else if (bracketsStack.top())
            {
            }
            else if (bracketsStack.top())
            {
            }
            else
            {
                return "NO";
            }
        }
    }