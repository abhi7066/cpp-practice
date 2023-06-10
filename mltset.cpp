#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(4);
    ms.insert(9);
    ms.insert(3);
    ms.insert(1);
    ms.insert(9);
    ms.insert(3);
    for(auto x: ms) 
    cout<<x<<" ";
    cout<<endl;
    

}