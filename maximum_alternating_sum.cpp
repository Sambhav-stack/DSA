#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> sq = {1,-1,2,-2,3,-3};
    for(int x:sq){
        sq.push_back(1LL*x*x);
    }
    sort(sq.begin(), sq.end());
    long long ans = 0;
    int n = sq.size();
    for(int i=0;i=n/2;i++){
        ans += sq[i];
    }
    for(int i=0;i<n/2;i++){
        ans -= sq[i];
    }
    cout<< ans;


}