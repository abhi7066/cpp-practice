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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for0(i, n){
        if((i+1)%2==0)
        arr[i]=0;
        else
        arr[i]=1;
    }
    
	do{
        int cnt = 0;
        for0(i, n){
            if((arr[i]+arr[i+1])%2 != 0)
            cnt++;
        }
        if(cnt == k){
            for0(i, n) cout<<arr[i]<<" ";
            break;
        }
        
    } while(next_permutation(arr, arr + n));
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