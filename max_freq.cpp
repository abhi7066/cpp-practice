#include<iostream>
#include<map>
using namespace std;

int main(){
    int n, max=INT16_MIN;
    cin >> n;
    map<int, int>mp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]>max)
        max=x;
    }
    cout<<max;
}