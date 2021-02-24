#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long c = 0;
void TOH_f(int n, string s,string m,string e)
{
    
    if(n == 0)
    {
        return;
    }
    TOH_f(n-1, s, e, m);
    c++;
    TOH_f(n-1, m ,s, e);



}
void TOH(int n, string s,string m,string e)
{
    
    if(n == 0)
    {
        return;
    }
    TOH(n-1, s, e, m);
    cout<<s<<" "<<e<<"\n";
    c++;
    TOH(n-1, m ,s, e);



}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    string s = "1", m = "2", e = "3";
    TOH_f(n,s,m,e);
    cout<<c<<"\n";
    
    TOH(n,s,m,e);
    
    
    
    
    
}