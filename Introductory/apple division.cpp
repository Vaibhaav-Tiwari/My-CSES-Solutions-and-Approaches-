//ans tracks the maximum possible weight of one group that does not exceed half of the total weight s/2
//1<<n represents 2^n which is the number of total subsets of n elements
// 



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[20];
    long long s=0, ans=0;
    for(int i=0; i<n; i++) 
        cin>>p[i], s+=p[i];
    for(int i=0; i<1<<n; i++){ //The loop iterates over all subsets of the apples
        long long cs = 0;
        for(int j=0; j<n; j++) //checks if the jth apple is included in the current subset i 
            if(i>>j&1)         //if yes then weight of apple p[j] is added to cs    
                cs+=p[j];
            
        
        if(cs<=s/2)             // If the total weight of the current subset (cs) is less than or equal to half of the total weight
            ans= max(ans, cs); // then the subset is valid
        
    }
    cout<<s-2*ans; // ans is the weight of the smaller group and the larger group automatically has a weight of s-ans
}