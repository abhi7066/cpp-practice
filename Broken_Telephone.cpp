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


// 1        3       1        1       1


// last = 1
// arr[i]= 3
// arr[i+1]= 1
// 




void solve() {
    int n;
    cin >> n;
    int arr[n];
    for0(i, n){
        cin>>arr[i];
    }
    int cnt=0;
    int last=INT_MIN;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])
            if(last!=i){
                cnt+=2;
                last=i+1;
            }
            else{
                cnt++;
                last=i+1;
            }
    }
    cout<<cnt<<endl;
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