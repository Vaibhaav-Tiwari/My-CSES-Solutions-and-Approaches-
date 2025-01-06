//there can be two methods - find how many times the numebr is perfectly divisible by 10 
//or you can find out how many 5's are there in the number
//as 10 is a combination of 5*2 and there are way many 2's in a number than there are 5 so
//number of 5's = number of 0's
//for the below code take n=25 as an example
//for when i=5 then 25/5=5
//then when i=25, 25/25=1
//so ans = 5+1 = 6
//this will calculate the answer efficiently without the need to calculate factorials
//(proof of this can be found on youtube by a video neso academy)



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000000+7
int main(){
    int n;
    cin>>n;
    ll ans=0;
    for(ll i=5; i<=n; i*=5){
        ans+=n/i;
    }
    cout<<ans;
}