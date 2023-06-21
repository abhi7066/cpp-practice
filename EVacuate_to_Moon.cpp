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
    int no_cars,no_outlet,hrs;
    cin>>no_cars>>no_outlet>>hrs;
    int car_capacity[no_cars], outlet_power[no_outlet];
    for0(i, no_cars){
        cin>>car_capacity[i];
    }
    for0(i, no_outlet){
        cin>>outlet_power[i];
    }
    sort(car_capacity, car_capacity+no_cars,greater<int>());
    sort(outlet_power, outlet_power+no_outlet,greater<int>());
    int ans=0;

    int small=min(no_cars,no_outlet);
    for0(i,small){
        if(outlet_power[i]*hrs<=car_capacity[i]){
            ans+=outlet_power[i]*hrs;
        }
        else{
            ans+=car_capacity[i];
        }
    }
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