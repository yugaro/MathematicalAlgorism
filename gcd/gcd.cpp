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

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}
