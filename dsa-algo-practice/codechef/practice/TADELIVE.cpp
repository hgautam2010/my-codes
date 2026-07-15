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
    
	ll i, j, k, a, b, n, m, t, ans, x, y;
	string s;
	
	cin >> n >> a >> b;
	
	vi A(n),B(n);
	
	vp C(n);
	
	REP(i,n) cin >> A[i];
	REP(i,n) cin >> B[i];
	
	REP(i,n) C[i] = mp(abs(A[i]-B[i]),i);
	
	sort(C.begin(), C.end());
	
	x = y = ans = 0;
	
	REPo(i,n-1)
	{
	    if(A[C[i].sc] > B[C[i].sc])
	    {
	        if(x+1 <= a)
	        {
	            x++;
    	        ans += A[C[i].sc];
	        }
	        else
	        {
	            y++;
    	        ans += B[C[i].sc];
	        }
	    }
	    else if(A[C[i].sc] < B[C[i].sc])
	    {
	        if(y+1 <= b)
	        {
	            y++;
    	        ans += B[C[i].sc];
	        }
	        else
	        {
	            x++;
    	        ans += A[C[i].sc];
	        }
	    } 
	    else
	    {
	        ans += B[C[i].sc];
	    }
	}
	
	cout << ans << endl;
	
	return 0;
}
