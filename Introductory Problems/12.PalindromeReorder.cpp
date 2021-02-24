#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s;
    cin>>s;
    ll l = s.size();
    map<char,string> m;
    for(auto c: s)
    {
        if(m.count(c))
        {
            m[c] += c;
        }
        else{
            m[c] = c;
        }
    }
    string odd = "", first = "", last = "";
    for(auto c : m)
    {
        if(c.second.size() % 2 == 1 && odd != "")
        {
            cout<<"NO SOLUTION";
            return 0;
        }
        else if(c.second.size() % 2 == 1)
        {
            odd += c.second;
        }
        else{
            first += c.second.substr(0,c.second.size()/2);
            last = c.second.substr(0,c.second.size()/2) + last;

        }
    }
    cout<< first + odd + last;
    
    
}