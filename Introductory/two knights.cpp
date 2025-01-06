//first knight can be put anywhere on the board so it will be k^2
//second knight can then be put anywhere on the board withh positions k^2-1
//therefore - k^2*(k^2*-1)/2
//divided by two to remove the cases where the knights would overlap on the board
//now each attack done  by the knight would would occupy 2*3 blocks as thats how a knight moves (2.5 moves)
//and for standing at one position there can be four such places where one knight can attack and similar for the other knight
//there 4*(k-2)*(k-1)
//hence the final equation where the knights would not attack each other would be - 
//k^2*(k^2-1)/2 - 4*(k-1)*(k-2)
//just printed 0 seperately cause i was lazy to thinkk for that case XD


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000000+7
int main(){
    int n;
    cin>>n;
    cout<<0<<endl;
    for(ll k=2; k<=n; k++){
    cout<<k*k*(k*k-1)/2 - 4*(k-1)*(k-2)<<endl;
    }  
}