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
    cin>>n;
    int cnt=0, max_om=0, max_addy=0;
    for0(i, n){
        int x;
        cin>>x;
        if(x!=0){
            cnt++;
            if(cnt>max_om)
            max_om=cnt;
        }
        else
        cnt=0;
    }
    cnt=0;
    for0(i, n){
        int x;
        cin>>x;
        if(x!=0){
            cnt++;
            if(cnt>max_addy)
            max_addy=cnt;
        }
        else
        cnt=0;
    }
    if(max_om>max_addy) cout<<"Om"<<endl;
    else if(max_om==max_addy) cout<<"Draw"<<endl;
    else cout<<"Addy"<<endl;
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