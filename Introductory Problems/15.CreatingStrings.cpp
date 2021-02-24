#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    vector<string> ans;
    do
    {
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<ans.size()<<"\n";
    for(string i: ans)
    cout<<i<<"\n";
    return 0;  
    
}