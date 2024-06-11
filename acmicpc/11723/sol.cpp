#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int M;
    cin >> M;

    int S = 0;

    for (int i = 0; i < M; i++)
    {
        string com;
        cin >> com;

        if (com == "add")
        {
            int arg;
            cin >> arg;
            S |= (1 << arg);
        }

        if (com == "remove")
        {
            int arg;
            cin >> arg;
            S &= ~(1 << arg);
        }
        if (com == "check")
        {
            int arg;
            cin >> arg;
            cout << (bool)(S & (1 << arg)) << endl;
        }
        if (com == "toggle")
        {
            int arg;
            cin >> arg;
            S ^= (1 << arg);
        }
        if (com == "all")
        {
            S = (1 << 21) - 1;
        }
        if (com == "empty")
        {
            S = 0;
        }
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