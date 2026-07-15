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
    
	ll i, j, k, a, b, n, m, t, ans, x, y, p;
	string s;
	
	cin >> n >> k >> p;
	
	vp A(n);
	vi B(n);
	
	REP(i,n) { cin >> A[i].fs; A[i].sc = i; }

	sort(A.begin(), A.end());
	
	B[0] = j = 0;
	
	REP2(i,1,n)
	{
	    if(abs(A[i].fs - A[i-1].fs) <= k)
	        B[A[i].sc] = B[A[i-1].sc];
	    else
	        B[A[i].sc] = ++j;
	}
	
	while(p--)
	{
	    cin >> a >> b;
	    if(B[a-1] == B[b-1])
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	
	return 0;
}
