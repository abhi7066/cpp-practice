#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string spell;
        cin >> n >> spell;
        bool flag = false;
        for(int i=0; i<n-1; i++){
            if(spell[i] > spell[i+1]){
                flag = true;
                spell.erase(spell.begin()+i);
                break;
            }
        }
        if(!flag)
            spell.pop_back();
        cout << spell << endl;
    }
}