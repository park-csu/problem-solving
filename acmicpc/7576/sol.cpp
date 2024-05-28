#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    int N, M, ans = 0;
    cin >> M >> N;

    if (N * M == 0)
    {
        cout << -1;
        return;
    }

    int tomatos[N][M];
    queue<pair<int, int>> Q;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> tomatos[i][j];
            if (tomatos[i][j] == 1)
            {
                Q.push(mp(i, j));
            }
        }
    }

    while (!Q.empty())
    {
        auto crd = Q.front();
        Q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nextX = crd.first + dx[i];
            int nextY = crd.second + dy[i];
            if (nextX < 0 || nextX >= N || nextY < 0 || nextY >= M)
            {
                continue;
            }

            if (tomatos[nextX][nextY] != 0)
            {
                continue;
            }

            Q.push(mp(nextX, nextY));
            tomatos[nextX][nextY] = tomatos[crd.first][crd.second] + 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tomatos[i][j] == 0)
            {
                cout << -1;
                return;
            }

            ans = max(ans, tomatos[i][j]);
        }
    }

    cout << ans - 1;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
