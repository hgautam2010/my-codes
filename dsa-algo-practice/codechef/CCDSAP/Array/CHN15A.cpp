#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,c,a;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		c=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a);
			if((a+k) % 7 == 0)
				c++;
		}
		printf("%d\n",c );
	}
	return 0;
}