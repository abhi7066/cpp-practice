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
    string str;
    cin>>n>>str;
    bool flag = true;
    for0(i,n){
        if(str[i]!=65 and str[i]!=97)
        flag=false;
        if(flag==false){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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