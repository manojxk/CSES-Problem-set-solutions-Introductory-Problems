#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    ll a[n];
    ll ts = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        ts += a[i];
    }
    ll sum = 0;
    ll ans = INT_MAX;
    for(ll i = 0; i < (1 << n); i++)
    {
        ll ss = 0;
        for(ll j = 0; j < n; j++)
        {
            
            if(i & (1 << j))
            {
                ss += a[j];
            }
        }
        ans  =  min(ans,abs(ts- ss-ss));

    }
    cout<<ans;
}