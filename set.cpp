#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>st;
    st.emplace(4);
    st.emplace(5);
    st.emplace(8);
    st.emplace(4);
    st.emplace(1);
    for(auto x:st)
    cout<<x<<" ";

}