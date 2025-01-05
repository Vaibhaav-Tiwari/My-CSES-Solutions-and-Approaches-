//we have to keep track of the largest value encountered so far
//note that ans variable would also store and process -ve values when needed
//so ultimately it'll calculate the +ve number of moves and give the correct answer

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    int n;
    cin>>n;
    int mx=0;
    ll ans=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mx=max(mx, x);
        ans+=mx-x;
    }
    cout<<ans;
}
