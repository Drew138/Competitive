#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

void aux(unordered_map<ll, ll> &counter, ll l, ll r, unordered_set<pair<ll, ll>, hash_pair> &visited, unordered_set<ll> &answer)
{
    if (l == r)
    {
        answer.insert(2 * l);
    }

    for (const auto &kv : counter)
    {
        ll key = kv.first, val = kv.second;
        if (counter[key] > 0)
        {
            l += key;
            counter[key] -= 1;

            if (visited.count(make_pair(l, r)) == 0)
            {
                visited.insert(make_pair(l, r));
                visited.insert(make_pair(r, l));
                aux(counter, l, r, visited, answer);
            }

            l -= key;
            r += key;

            if (visited.count(make_pair(r, l)) == 0)
            {
                visited.insert(make_pair(l, r));
                visited.insert(make_pair(r, l));
                aux(counter, l, r, visited, answer);
            }

            r -= key;
            counter[key] += 1;
        }
    }
}

void barbells(vector<ll> &weights, vector<ll> &bars)
{
    unordered_map<ll, ll> counter;
    for (const auto &i : weights)
    {
        if (!counter.count(i))
        {
            counter[i] = 0;
        }
        counter[i] += 1;
    }

    unordered_set<ll> answer;
    unordered_set<pair<ll, ll>, hash_pair> visited;
    aux(counter, 0, 0, visited, answer);

    set<ll> noreps;
    for (const auto &bar : bars)
    {
        for (const auto &ans : answer)
        {
            noreps.insert(bar + ans);
        }
    }

    for (const auto &el : noreps)
    {
        cout << el << endl;
    }
}

int main()
{
    ll n, m;
    vector<ll> bars;
    vector<ll> weights;

    cin >> n >> m;
    while (n--)
    {
        ll temp;
        cin >> temp;
        bars.push_back(temp);
    }

    while (m--)
    {
        ll temp;
        cin >> temp;
        weights.push_back(temp);
    }

    barbells(weights, bars);
}