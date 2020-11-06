#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep2(i, x, n) for (ll i = x; i < (ll)(n); i++)
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define all(v) v.begin(), v.end()
#define mp make_pair
#define INF 1e9


struct UnionFind
{
    vector<int> d;
    UnionFind(int n = 0) : d(n, -1) {}
    int find(int x)
    {
        if (d[x] < 0)
            return x;
        return d[x] = find(d[x]);
    }
    bool unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y)
            return false;
        if (d[x] > d[y])
            swap(x, y);
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -d[find(x)]; }
};
