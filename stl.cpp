#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    st.emplace(3);
    st.emplace(2);
    st.emplace(3);
    st.emplace(3);
    st.emplace(8);

    for(int x:st)
    cout<<x<<" ";
    cout<<endl;



}