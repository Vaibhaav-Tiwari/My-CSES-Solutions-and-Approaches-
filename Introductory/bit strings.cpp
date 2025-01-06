//use the properties of modulo arithmetic 
//define value of 10^9+7 and loop to get the answer
//both of the ways would work the same

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000000+7
int main(){
    int n, ans=1;
    cin>>n;
    for(int i=0; i<n; i++){
        ans*=2; // as the number of combinations is just basically 2^n
        ans%=M;
        ans = 2*ans%((int)10e9+7); //another of writing the same
    }
    cout<<ans;
}