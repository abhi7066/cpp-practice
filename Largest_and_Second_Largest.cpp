#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define for2(i, a, b) for (int i = a; i < b; i++)
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif

void solve() {
    int n;
    cin >> n;
    int a[n];
    for0(i, n){
        cin >> a[i];
    }
    int max_sum = 0;
    sort(a, a+n, greater<int>());
    // for(int i=n-1;i>0;i--){
    //     if((a[n-1]+a[i]>max_sum) and (a[n-1]!=a[i]))
    //     max_sum=a[n-1]+a[i];
    // }

    for0(i, n){
        cout << a[i];
    }
    cout << max_sum << endl;
}

signed main() {
    fast
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}