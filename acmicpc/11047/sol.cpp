#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int N, K;
    cin >> N >> K;
    
    int coins[N];
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> coins[i];
    }

    for (int i = N-1; i >= 0; i--)
    {
        if (K - coins[i] < 0) continue;
        int div = K / coins[i];
        ans += div;
        K -= div * coins[i];
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
