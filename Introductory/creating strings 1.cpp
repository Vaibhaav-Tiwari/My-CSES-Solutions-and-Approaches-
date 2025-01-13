// The std::next_permutation in C++ is used to rearrange the elements of the 
// given range [first, last) to the lexicographical larger permutation if it exists.

//we have to use the above STL function to iterate all the permutations of the string
// and then print each string in order, to get the answer

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    vector<string> ans;
    do{
        ans.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
    cout<<ans.size()<<endl;
    for(string a : ans){
        cout<<a<<endl;
    }
}