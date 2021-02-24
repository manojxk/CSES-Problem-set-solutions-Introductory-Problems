#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    ll s = 0;
    for(ll i = 5; i <= n; i *= 5)
    {
        s += n/i;
    }
    cout << s;
    return 0;

}