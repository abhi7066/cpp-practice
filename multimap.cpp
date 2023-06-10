#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<int, string> mp;
    mp.emplace(3, "asd");
    mp.emplace(38, "cv");
    mp.emplace(13, "adfsd");
    mp.emplace(33, "cv");
    mp.emplace(3, "vf");

    for (auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}