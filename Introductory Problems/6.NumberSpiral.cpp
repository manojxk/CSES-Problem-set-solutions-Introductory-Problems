
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;


#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
// change these numbers
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("${Task_Name}.in", "r", stdin); freopen("${Task_Name}.out", "w", stdout); 
    
    // code here -- use cin and cout. 
    // ifstream dict("dict.txt"); // for file reading
    ll t,x,y,c;
    cin>>t;
    while(t--)
    {
        cin>> y >> x;
        if(x > y)
        {
            if(x % 2 == 0)
            {
                x--;
                c = x*x + y;
            }
            else{
                c = x*x - y + 1;
            }
        }
        else{
            if(y % 2 == 0)
            {
                c = y*y - x + 1;
            }
            else{
                y--;
                c = y*y + x;
            }
        }
        cout<<c<<endl;
    }

    

    return 0;
}

