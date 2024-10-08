#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;
using pi = pair<int, int>;
using vpii = vector<pi>;
#define pb push_back
#define ll long long
#define vec vector<long long>
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define all(a) (a).begin(), (a).end()
#define MOD 1000000007
#define pll pair<long long, long long>
#define F(i, a, b) for (int i = a; i < b; i++)

bool checkOverlap(ll &s1, ll &e1, ll &s2, ll &e2)
{
    return max(s1, s2) <= min(e1, e2);
}
void solve()
{
    ll s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;

    if (checkOverlap(s1, e1, s2, e2))
    {
        cout << max(s1, s2) << " " << min(e1, e2) << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    // test{solve();}
    solve();
}