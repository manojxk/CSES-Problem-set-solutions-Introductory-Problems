#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> solve(int n)
{
    if(n <= 0)
    {
        return { "0" };
    }
    if(n == 1)
    {
        return { "0", "1" };
    }
    //recursive
    vector<string> recAns = solve(n-1);
    vector<string> mainAns;
    //append 0
    for(int i = 0; i < recAns.size(); i++)
    {
        mainAns.push_back("0" + recAns[i]);
    }
    for(int i = recAns.size()-1; i >= 0; i--)
    {
        mainAns.push_back("1" + recAns[i]);
    }
    return mainAns;


}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<string> v;
    v = solve(n);
    for(auto i : v)
    {
        cout<<i<<"\n";
    }
    
    
    
    
}