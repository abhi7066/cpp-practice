#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, sum = 0, cnt = 0;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            sum+=arr[i];
            if(sum>=m){
                cnt++;
                sum=0;
            }
        }
        cout<< cnt << endl;
    }
}
