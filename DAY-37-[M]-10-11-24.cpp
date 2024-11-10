#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
void mainSolve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans1 = 0;
    for (int h : v)
        ans1 = max(ans1, h);
    int ans2 = 0;
    for (int h : v)
    {
        ans2 += (h / x + (h % x != 0));
    }
    int ans = min(ans1, ans2);
    cout << ans << endl;
}
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        mainSolve();
    }
    return 0;
}
