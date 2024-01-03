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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif

void solve() {
    int n;
    cin >> n;
    int arr_A[n], arr_B[n];
    for(int i=0; i<n; i++){
        cin >> arr_A[i];
    }
    for(int i=0; i<n; i++){
        cin >> arr_B[i];
    }

    sort(arr_A, arr_A+n);
    sort(arr_B, arr_B+n, greater<int>());
    int sum = arr_A[0]+arr_B[0];
    bool flag = true;

    for(int i=1; i<n; i++){
        if(sum != arr_A[i]+arr_B[i])
        flag = false;
    }

    if(flag){
        for(int i=0; i<n; i++){
        cout << arr_A[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++){
        cout << arr_B[i] << " ";
    }
    cout << endl;
    }
    else cout << -1 << endl;
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