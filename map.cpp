#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> mp;

    mp[3] = "gg";
    mp[33] = "gsg";
    mp[32] = "grg";
    mp[3] = "gfrg";

    cout << "Key"
         << "\t"
         << "Value" << endl;
    cout << "--------------" << endl;

    auto it = mp.find(89);
    cout << (*it).first;

    for (auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << "\t" << (*it).second << endl;
    }


    
    map<pair<int,int>,string>mpp;
    mpp.insert({{3,4},"hs"});
    mpp.insert({{9,3},"hs"});
    mpp.insert({{1,4},"hs"});
    mpp.insert({{34,9},"hs"});
    mpp.insert({{3,2},"hs"});
    mpp[{3,4}]="hhjkkgh";



    cout<<"end"<<endl;
    for(auto it=mpp.begin();it!=mpp.end();it++){
        cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
        
    }
}