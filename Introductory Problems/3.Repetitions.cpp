#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    cin>>s;
    ll ans = 1, c = 0;
    char d = 'A';
    for(char l : s)
    {
        if(d == l)
        {
            c++;
            ans = max(ans, c);
        }
        else{
            d = l;
            c = 1;
        }
    }
    cout<<ans;


    return 0;
}