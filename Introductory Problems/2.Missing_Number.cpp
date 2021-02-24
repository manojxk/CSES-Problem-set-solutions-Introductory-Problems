#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,sum = 0,x,y;
    cin>>n;

    for(int i = 1; i <= n-1; i++)
    {
        cin>>x;
        sum += x;
    }
    cout<<(((n)*(n+1))/2) - sum;

 return 0;
}