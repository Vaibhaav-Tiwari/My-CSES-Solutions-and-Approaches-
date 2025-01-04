//the problem is known as Collatz conjecture 
//it states that every number will converge to 1 if we apply the given algorithm 
//i.e. if even then divide by 2 and if odd then multiply with 3 and add 1
//it is a direct implementation problem 
//just take care of edge case - big inputs -> use long long instead of int



#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
            n=n/2;
        } else if(n%2!=0){
            n=n*3+1;
        }
    }
    cout<<1; // to print 1 in the end as the while will terminate at n>1
}
