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
    int cnt=0,max_vedant=INT_MIN;
    for0(i,n){
        char x;
        cin>>x;
        if(x=='P'){
            cnt++;
            if(cnt>max_vedant)
            max_vedant=cnt;
        }
        else
        cnt=0;
    }
    cnt=0;
    int max_maitreyee=INT_MIN;
    for0(i,n){
        char x;
        cin>>x;
        if(x=='P'){
            cnt++;
            if(cnt>max_maitreyee)
            max_maitreyee=cnt;
        }
        else
        cnt=0;
    }
    if(max_vedant>max_maitreyee)
    cout<<"Vedant"<<endl;
    else if(max_vedant==max_maitreyee)
    cout<<"Tie"<<endl;
    else cout<<"Maitreyee"<<endl;
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






