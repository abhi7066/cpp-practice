#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq;
    pq.push(3);
    pq.push(7);
    pq.push(1);
    pq.push(2);


    while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
    }

    cout<<"NEW"<<endl;
    priority_queue<int, vector<int>,greater<int>>mpq;
    mpq.push(2);
    mpq.push(32);
    mpq.push(12);
    mpq.push(22);

    while(!mpq.empty()){
        cout<<mpq.top()<<" ";
        mpq.pop();
    }


}