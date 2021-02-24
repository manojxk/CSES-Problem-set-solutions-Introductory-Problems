#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll N;
    cin>>N;
    for(ll n = 1; n <= N; n++)
    {
        ll totalpositions = (n*n) * (n*n-1)/2;
        ll attackingpositions = 4*(n-1)*(n-2);
        cout<<totalpositions-attackingpositions<<endl;
        
    }
    return 0;
    
    



}