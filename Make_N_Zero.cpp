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
    bool flag = false;
    cin >> n;

    // if(n>=4){
    //     n = n%4;
    //     if(n==3) n = n%3;
    // }
    // else if(n==3){
    //     n = n%3;
    // }
    // flag = (n==0) ? true : false;
    // flag ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    if(n!=1 and n!=2 and n!=5){
        flag = true;
    }
    flag ? cout<<"YES"<<endl : cout<<"NO"<<endl;
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