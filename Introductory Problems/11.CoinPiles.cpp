#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if((2*a >= b) && (2*b >= a) && (a+b) % 3 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

    return 0;
    
    



}