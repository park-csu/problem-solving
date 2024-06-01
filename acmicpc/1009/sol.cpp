#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int a, b;
    cin >> a >> b;

    a = a % 10;
    b = b % 4 + 4;
    int ans = pow(a, b);
    ans = ans % 10;
    ans = ans == 0 ? 10 : ans;
    cout << ans << endl;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 0;
    cin >> tc;
    for (ll i = 0; i < tc; i++)
    {
        solve();
    }

    return 0;
}