#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;


int main() {
    int q;
    string text;
    cin >> q;
    stack <string> listText;
    for (int i = 0; i < q; ++i) {
        int operation;
        string newText;
        int index;
        cin >> operation;
        switch(operation) {
            case 1:
                cin >> newText;
                listText.push(text);
                text.append(newText);
                break;
            case 2:
                cin >> index;
                listText.push(text);
                text.erase(text.size() - index, index);
                break;
            case 3:
                cin >> index;
                cout << text.at(index-1) << endl;
                break;
            case 4:
                text = listText.top();
                listText.pop();
                break;
        }
    }  
    return 0;
}