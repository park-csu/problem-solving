#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int N, M;
    cin >> N >> M;

    unordered_map<string, string> S;

    for (int i = 0; i < N; i++)
    {
        string url, pw;
        cin >> url >> pw;
        S[url] = pw;
    }

    for (int i = 0; i < M; i++)
    {
        string url;
        cin >> url;
        cout << S[url] << endl;
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
