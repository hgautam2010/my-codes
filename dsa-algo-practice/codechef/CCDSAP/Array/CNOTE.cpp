#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,x,y,n,k,p,c,r,f;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>k>>n;
		r = x - y;
		f = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d",&p,&c);
			if(p >= r && c <= k && f != 1)
				f = 1;
		}
		printf("%s\n",((f == 0)?"UnluckyChef":"LuckyChef") );
	}
	return 0;
}