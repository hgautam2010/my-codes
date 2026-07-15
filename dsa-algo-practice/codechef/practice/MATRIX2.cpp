//Hader files
#include <bits/stdc++.h>

//Macros
#define REP(i, n) for (i = 0; i < n; i++)
#define REPo(i, n) for (i = n; i >= 0; i--)
#define REP2(i, m, n) for (i = m; i < n; i++)
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define mod 1000000007
#define pp pair<int, pair<ll, int> >
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vi>
#define vp vector<pair<int, int> >
#define vpp vector<pp>
#define sc second
#define fs first
#define Himanshu ios_base::sync_with_stdio(false);
#define Gautam cin.tie(NULL);

using namespace std;

// directions
const int fx[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
const int fxx[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

//typedefs
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef pair<ll, ll> iill;

int main()
{
    Himanshu Gautam
    
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    
	ll i, j, k, a, b, n, m, t, x, y, p, ans;
	string s;

	cin >> n >> m;
	
	vvi A;
	
	REP(i,n)
	{
	    vi B;
	    cin >> s;
	    REP(j,s.length())
	    {
    	    B.pb(s[j]-'0');
	    }
	    B.pb(0);
	    A.pb(B);
	}
	
	vi B(m+1,0);
	A.pb(B);
	
	REPo(i,n-1)
	    REPo(j,m-1)
	    {
	        if(A[i][j] == 1)
	            A[i][j] = min(A[i][j+1],A[i+1][j+1])+1;
	    }

	ans = 0;
	
	REP(i,n)
	    REP(j,m)
	        ans+=A[i][j];
	        
	cout << ans << endl;
	return 0;
}
