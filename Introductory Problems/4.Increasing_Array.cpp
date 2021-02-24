#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll c = 0, f = a[0];
    for(ll i = 1; i < n; i++)
    {
        while(f > a[i])
        {
            a[i]++;
            c++;
        }
        f = a[i];
    }
    cout<<c;


    return 0;
}