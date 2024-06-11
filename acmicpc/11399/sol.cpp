#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int N;
    cin >> N;

    int P[N];
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    sort(P, P + N);

    for (int i = 0; i < N; i++)
    {
        ans += P[i] * (N - i);
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
