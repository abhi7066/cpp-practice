#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// bool comp(int el1, int el2){
//     if(el1<=el2) return true;
//     else return false;
// }

//      or

bool comp(int el1, int el2){
    return el1<=el2;
}

bool veccomp(pair<int, int>el1,pair<int, int>el2){
    if(el1.first < el2.first)
        return true;
    else if(el1.first==el2.first)
        if(el1.second>el2.second) return true;
        else return false;
    else
        return false;
}


int main(){
    int arr[]={3,8,5,2,9,4};
    sort(arr,arr+6,comp);
    for(int x:arr)
        cout<<x<<" ";
    cout<<endl;

    vector<pair<int, int>>pr={{1,3},{2,4},{3,5},{2,5},{9,6},{9,3}};
    sort(pr.begin(),pr.end(),veccomp);
    for(auto it=pr.begin();it!=pr.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}