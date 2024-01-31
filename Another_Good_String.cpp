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
    int n, q, cnt = 0, long_substr = 1;
    cin >> n >> q;
    vector <char> s;
    char temp_char;
    for0(i, n+q){
        char ch;
        cin >> ch;
        s.push_back(ch);
    }
    temp_char = s[0];
    for0(i, n+q){
        if(temp_char == s[i]){
            cnt++;
        }
        else{
            temp_char = s[i];
            cnt = 1;
        }
        long_substr = max(long_substr, cnt);
        if(i>=n-1){
            cout << long_substr << " ";
        }
    }
    cout << endl;
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