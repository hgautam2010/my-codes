#include <bits/stdc++.h>
#define mod 1000000007
typedef unsigned long long int ull;
using namespace std;
int main()
{
	ull t,m,a,b,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&m);
		if(m<=3)
		{
			printf("0\n");
			continue;
		}
		a=m;
		b=a-1;
		c=b-1;
		d=c-1;
		if(a%4==0)
			a=a/4;
		else if(b%4==0)
			b=b/4;
		else if(c%4==0)
			c=c/4;
		else
			d=d/4;
		a=a%mod;
		b=b%mod;
		c=c%mod;
		d=d%mod;
		if(a%2==0)
			a=a/2;
		else if(b%2==0)
			b=b/2;
		else if(c%2==0)
			c=c/2;
		else
			d=d/2;
		a=a%mod;
		b=b%mod;
		c=c%mod;
		d=d%mod;
		printf("%llu\n",((((((a%mod)*b)%mod)*c)%mod)*d)%mod);
	}
}
