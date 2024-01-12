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

bool accessChecker(string str, int swipes){
    int swipes_left = 0;
    for(char iterator : str){
        if(iterator == '0'){
            if(swipes_left == 0){
                return false;
            }
            swipes_left--;
        }
        else{
            swipes_left = swipes;
        }
    }
    return true;
}

void solve() {
    int str_length, swipes;
    cin >> str_length >> swipes;
    string str;
    cin >> str;
    cout << (accessChecker(str, swipes) ? "YES" : "NO") << endl;
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