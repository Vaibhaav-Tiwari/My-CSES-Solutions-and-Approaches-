//at first glance this could be an approach - a simple question of just nested if-else within a for-loop
//but this mistake is what i did as we have to see the contiguous repetitions
//so we create a for-loop in which if we will find an element then we would just compare it
//with its previous one and if they match we increase the count by one and if not then we set the counter again to 0
//and after that we keep updating the answer variable value to store the highest number in it



#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    char current;
    int count=0, ans=0;
    for(int i=0; i<n; i++){
        if(s[i]!=current){
            current=s[i];
            count=0;
        }
        if(s[i]==current){
            count++;
        }
        ans=max(count, ans);
    }
    cout<<ans;
}
