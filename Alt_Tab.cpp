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
    vector<string>vc;
    set<string>st;
    for0(i, n){
        string str;
        cin>>str;
        vc.pb(str);
        st.insert(str);
    }
    for(int i=vc.size()-1;i>=0;i--){
        string x=vc[i];
        if(st.find(x)!=st.end()){
            cout<<x.substr(x.size()-2);
            st.erase(x);
        }
    }

}

signed main() {
    fast
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif

    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}