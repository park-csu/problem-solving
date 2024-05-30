#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

// Think XOR like a addition in GF(2)
// Find basis of vector space a_n
void solve()
{
    int n;
    cin >> n;

    vector<ll> basis(60);

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        for (int j = 59; j >= 0; j--)
        {
            if ((x >> j) & 1)
            {
                if (!basis[j])
                {
                    basis[j] = x;
                    break;
                }
                else
                {
                    x ^= basis[j];
                }
            }
        }
    }

    ll ans = basis[0];
    for (int i = 59; i >= 0; i--)
    {
        ans = max(ans, ans ^ basis[i]);
    }

    cout << ans;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
