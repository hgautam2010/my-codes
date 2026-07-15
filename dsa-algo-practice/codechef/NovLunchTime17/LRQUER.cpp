#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int t,n,q,A[100001],l,r,x,a;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		for (int i = 0; i < n; ++i)
			cin>>A[i];
		while(q--)
		{
			cin>>a>>l>>r;
			if(a == 1)
			{
				l -= 1;
				r -= 1;
				x = 0;
				for(int j = l; j <= r; j++)
					x = max(((A[j]-A[l])*(A[r]-A[j])),x);
				cout<<x<<endl;
			}
			else
				A[l-1] = r;
		}
	}
	return 0;
}