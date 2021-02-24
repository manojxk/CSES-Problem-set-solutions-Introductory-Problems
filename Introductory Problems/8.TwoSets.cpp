#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin>>n;
    vector<ll> v1,v2;
    ll sum = n*(n+1)/2;
    if(sum % 2 != 0)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES"<<"\n";
        for(ll i = n; i >= 1; i--)
        {
            if(accumulate(v1.begin(),v1.end(),0) > accumulate(v2.begin(),v2.end(),0))
            {
                v2.push_back(i);
            }
            else
            {
                v1.push_back(i);
            }
        }
        cout<<v1.size()<<"\n";
        for(ll i : v1)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(ll i : v2)
        {
            cout<<i<<" ";
        }


    }
    return 0;
    
    



}