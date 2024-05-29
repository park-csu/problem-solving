#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair

void hanoi(int src, int via, int dst, int n)
{
    if (n == 1)
    {
        printf("%d %d\n", src, dst);
        return;
    }

    hanoi(src, dst, via, n - 1);
    printf("%d %d\n", src, dst);
    hanoi(via, src, dst, n - 1);
}

void solve()
{
    int n;
    scanf("%d", &n);

    // if (n == 0)
    // {
    //     printf("0\n");
    //     return;
    // }

    printf("%d\n", (1 << n) - 1); 
    hanoi(1, 2, 3, n);
}

int main(void)
{
    solve();

    return 0;
}