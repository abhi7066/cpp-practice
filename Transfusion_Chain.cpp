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
    map<string, int>mp;
    int blood_o=0,blood_a=0,blood_b=0, blood_ab=0;
    for0(i, n){
        string x;
        cin>>x;
        if(x=="O") blood_o++;
        else if(x=="A") blood_a++;
        else if(x=="B") blood_b++;
        else blood_ab++;
    }
    int ans=blood_o;
    if(blood_a>blood_b) ans+=blood_a;
    else ans+=blood_b;
    if(blood_ab!=0) ans+=blood_ab;
    cout<<ans<<endl;
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