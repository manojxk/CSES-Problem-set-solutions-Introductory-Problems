#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    ll s = 1;
    for(ll i = 1; i <= n; i++)
    {
        s = (2*s)% ((int)1e9 + 7);
    }
    cout << s;
    return 0;
    
    



}