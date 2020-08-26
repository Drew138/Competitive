#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

void checkhieros()
{
    string hierogliph;
    cin >> hierogliph;
    unordered_map<char, pair<int, int>> hiero;
    hiero['B'] = make_pair(1, 0);
    hiero['U'] = make_pair(10, 0);
    hiero['S'] = make_pair(100, 0);
    hiero['P'] = make_pair(1000, 0);
    hiero['F'] = make_pair(10000, 0);
    hiero['T'] = make_pair(100000, 0);
    hiero['M'] = make_pair(1000000, 0);
    int current = hiero[hierogliph.at(0)].first;
    int total = 0;
    bool isIncr;
    bool isIncrDef = false;
    for (int i = 0; i < hierogliph.size(); ++i)
    {
        if (!isIncrDef && current < hiero[hierogliph.at(i)].first)
        {
            isIncr = true;
            isIncrDef = true;
        }
        else if (!isIncrDef && current > hiero[hierogliph.at(i)].first)
        {
            isIncr = false;
            isIncrDef = true;
        }
        if (isIncr && (hiero[hierogliph.at(i)].second < 9) && (hiero[hierogliph.at(i)].first > current))
        {
            current = hiero[hierogliph.at(i)].first;
            hiero[hierogliph.at(i)].second++;
            total += hiero[hierogliph.at(i)].first;
        }
        else if (!isIncr && (hiero[hierogliph.at(i)].second < 9) && (hiero[hierogliph.at(i)].first < current))
        {
            current = hiero[hierogliph.at(i)].first;
            hiero[hierogliph.at(i)].second++;
            total += hiero[hierogliph.at(i)].first;
        }
        else if (hiero[hierogliph.at(i)].first == current && (hiero[hierogliph.at(i)].second < 9))
        {
            hiero[hierogliph.at(i)].second++;
            total += hiero[hierogliph.at(i)].first;
        }
        else
        {
            cout << "error" << endl;
            return;
        }
    }
    cout << total << endl;
}

void idk()
{
    int iters;
    cin >> iters;
    for (int i = 0; i < iters; i++)
    {
        checkhieros();
    }
}

int main()
{
    idk();
}