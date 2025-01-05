//just print the even numbers once and then the odd numbers
// or vice versa, the order doesnt really matter here
//though the only case at which the order would matter will be where n=4
//if we take even first then 2 4 1 3 
//but if we take odd first then 1 3 2 4 which will be the wrong answer

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==3 || n==2){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    
    if(n%2==0){
        for(int i=2; i<=n; i+=2){
            cout<<i<<" ";
        }        
        for(int i=1; i<n; i+=2){
            cout<<i<<" ";
        }
    } else {
        for(int i=n-1; i>0; i-=2){
            cout<<i<<" ";
        }
        for(int i=n; i>0; i-=2){
            cout<<i<<" ";
        }
    }
}
