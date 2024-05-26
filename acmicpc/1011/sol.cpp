#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int x, y;
    cin >> x >> y;

    int td = y-x;
    int sq = sqrt(td);
    if (sq*sq == td)
    {
        cout << sq*2-1 << endl;
    }
    else if (sq*sq < td && td <= sq*sq+sq)
    {
        cout << 2*sq << endl;
    }
    else
    {
        cout << 2*sq+1 << endl;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc;
    cin >> tc;
    for (ll i = 0; i < tc; i++)
    { 
        solve();
    }

    return 0;
}