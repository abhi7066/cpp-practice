#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int health, gun, laserBefore, laserAfter, atleastHit, laserHit, gunHit;
        cin >> health >> gun >> laserBefore >> laserAfter >> atleastHit;
        gunHit = (health+gun-1)/gun;
        if(laserBefore*atleastHit >= health){
            laserHit = (health+laserBefore-1)/laserBefore;
        }
        else{
            laserHit = atleastHit + (health - laserBefore*atleastHit+laserAfter-1)/laserAfter;
        }
        cout << min(gunHit, laserHit) << endl;
    }
}