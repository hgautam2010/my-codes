#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
using namespace std;
typedef unsigned long long ull;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int t,n,q,a0,a1,a2,a3,a;
	ull minn;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<pair<int,pair<int,pair<int,int> > > > v;
		while(n--)
		{
			cin>>a0>>a1>>a2>>a3;
			v.pb(mp(a3,mp(a2,mp(a1,a0))));
		}
		cin>>q;
		while(q--)
		{
			cin>>a;
			minn = 1000000000000000000;
			for (int i = 0; i < v.size(); ++i)
				minn = min(minn,(1ULL*a*a*a*v[i].first + 1ULL*a*a*v[i].second.first + 1ULL*a*v[i].second.second.first + 1ULL*v[i].second.second.second));
			cout<<minn<<endl;
		}
	}
	return 0;
}