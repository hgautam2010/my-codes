#include <bits/stdc++.h>
using namespace std;
int e[2000001],o[2000001];
unsigned long long v[1000001];
void co(int n)
{
	int a,b,i,x,y,m;
	i = b = a = 0;
	m = n;
	while(n != 0)
	{
		if((n%10)%2 == 0)
			a += (n%10);
		else
			b += (n%10);
		n /= 10;
		i = (i+1)%2;
	}
	if(i)
	{
		e[m] = a;
		o[m] = b;
	}
	else
	{
		e[m] = b;
		o[m] = a;
	}
}
void seta()
{
	memset(e,-1,sizeof(e));
	memset(o,-1,sizeof(o));
	for(int i = 0;i < 2000001; ++i)
		co(i);
	long long le,lo,lle,llo,lp;
	lp = lle = llo = le = lo = 0;
	for (int i = 1; i < 1000001; ++i)
	{
		lp = lp - abs(e[i] - o[i])*2;
		lp = lp + abs(e[(i-1)*2] - o[(i-1)*2]);
		lp = lp + abs(e[i*2-1] - o[i*2-1])*2;
		lp = lp + abs(e[i*2] - o[i*2]);
		v[i] = v[i-1] + lp;
	}
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	seta();
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<v[n]<<endl;
	}
	return 0;
}