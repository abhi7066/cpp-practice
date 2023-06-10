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
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif

void interchange(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void bubblesort(int *arr, int n){
    for(int i=0;i<n-1;i=i++){
        if(arr[i]>arr[i+1])
        interchange(arr[i], arr[i+1]);
    }
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    cout<<"f";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto x:arr)
    cout<<x;
    bubblesort(arr, n);

    for(auto x:arr)
    cout<<x;
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