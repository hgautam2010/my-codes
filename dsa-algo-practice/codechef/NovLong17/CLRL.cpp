#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,r,l,h,v,i,f;
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>n>>r;
		l = 0;
		h = INT_MAX;
		f = 1;
		for (i = 0; i < n; i++)
		{
			cin>>v;
			if(v < l || v > h || (v < r && l > v) || (v > r && h < v))
				f = 0;
			if(v < r && l < v)
				l = v;
			if(v > r && h > v)
				h = v;
		}
		if(f == 1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}