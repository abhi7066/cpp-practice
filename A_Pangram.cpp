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


    // ## This code is not yet get executed.
    // bool flag = true;
    // char a1='a',a2='A';
    // for0(i,n){
    //     if(str[i]!=a1 and str[i]!=a2)
    //     flag=false;
    //     if(flag==false){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    //     a1++;
    //     a2++;
    // }
    // cout<<"YES"<<endl;


    set<char>st;
    for0(i, n){
        if(str[i]>=65 and str[i]<=90)
        st.insert(str[i]+32);
        else
        st.insert(str[i]);
    }

    if(st.size()!=26){
        no
        return;
    }

    char ch='a';
    bool flag = true;
    for(auto it=st.begin(); it!=st.end(); it++){
        if(*it!=ch)
        flag=false;
        if(flag==false){
            break;
        }
        ch++;
    }
    
    if(flag) yes
    else no
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