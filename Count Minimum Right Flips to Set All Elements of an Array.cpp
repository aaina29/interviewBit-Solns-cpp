N light bulbs are connected by a wire. Each bulb has a switch associated with it, however due to faulty wiring, a 
switch also changes the state of all the bulbs to the right of current bulb. Given an initial state of all bulbs, find 
the minimum number of switches you have to press to turn on all the bulbs. "0 represents the bulb is off and 1 
represents the bulb is on.

#include<bits/stdc++.h>
using namespace std;

int bulbs(vector<int>A){
    int n = A.size();
    int switch_cnt=0;
    for(int i=0;i<n;i++){
        if(switch_cnt%2)
            A[i] = 1 - A[i];
        if(A[i]==0)
            switch_cnt++;
    }
    return switch_cnt;
}

int main(){
    int n,d;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>d;
        v.push_back(d);
    }
    cout<<bulbs(v)<<endl;
    return 0;
}