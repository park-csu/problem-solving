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
    unordered_map<string, int> names;
    vector<string> ans;

    for (int i = 0; i < N + M; i++)
    {
        string name;
        cin >> name;
        if (names.find(name) == names.end())
        {
            names[name] = 1;
        }
        else
        {
            ans.pb(name);
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (const auto &v : ans)
    {
        cout << v << endl;
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
