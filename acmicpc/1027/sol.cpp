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

    int buildings[N];
    int visible[N];

    memset(buildings, 0, sizeof(buildings));
    memset(visible, 0, sizeof(visible));

    for (int i = 0; i < N; i++)
    {
        cin >> buildings[i];
    }

    for (int i = 0; i < N; i++)
    {
        double last_slope = - numeric_limits<double>::infinity();
        for (int j = i + 1; j < N; j++)
        {
            double slope = (double)(buildings[j] - buildings[i]) / (j - i);

            if (slope > last_slope)
            {
                visible[i]++;
                visible[j]++;
                last_slope = slope;
            }
        }
    }

    cout << *max_element(visible, visible + N);
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}