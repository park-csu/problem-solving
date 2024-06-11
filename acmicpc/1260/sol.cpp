#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int n, m, v;
    cin >> n >> m >> v;

    bool G[n+1][n+1];
    memset(G, false, sizeof(G));

    for (int i = 0; i < m; i++)
    {
        int fr, to;
        cin >> fr >> to;
        G[fr][to] = true;
    }

    

}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}