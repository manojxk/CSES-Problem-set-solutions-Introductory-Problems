#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        ll num = 1;
        string s = "";
        ll k;
        cin>>k;
        while(s.size() <= 1e18)
        {
            s += to_string(num);
            num++;
        }
        
        if(k <= 9)
        {
            cout<<k<<"\n";
        }
        else if(10 <= k <= 180)
    }
    
}