#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int t,n,q,d[100002],x;
	unsigned long long a;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		a = 1;
		for (int i = 0; i < n; ++i)
		{
			cin>>d[i];
			if(a < 1ULL*10000000000)
				a = a*d[i];
		}
		while(q--)
		{
			cin>>x;
			cout<<x/a<<" ";
		}
		cout<<endl;
	}
	return 0;
}