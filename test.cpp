#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n=8;
    int arr[]={1,5,7,7,8,10,10,11,11,11,12};
    auto it = lower_bound(arr, arr+n,13);
    int index = it-arr;
    cout<<index;
}