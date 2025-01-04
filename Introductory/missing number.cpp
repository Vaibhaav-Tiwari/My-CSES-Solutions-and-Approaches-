//just simply use the formula for sum of numbers from 1 to numbers
//i.e. n(n+1)/2 and subtract the sum of given series from it and youll get the answer




#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, m, sum=0;
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>m;
        sum+=m;
    }
    cout<<n*(n+1)/2-sum;
}
