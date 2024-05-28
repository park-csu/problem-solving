#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void solve()
{
    ll min, max;
    cin >> min >> max;

    ll cnt = max - min + 1;
    vector<bool> es(cnt);

    ll i = 2;
    while (i*i <= max)
    {
        ll divisible = min / (i*i);
        if (min % (i*i) != 0)
           divisible++;

        while (divisible*i*i <= max)
        {
            if (!es[divisible*i*i - min])
            {
                es[divisible*i*i - min] = true;
                cnt--;
            }

            divisible++;
        }

        i++;
    }

    cout << cnt;

}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}