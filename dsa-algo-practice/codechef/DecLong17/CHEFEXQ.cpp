//Not solved
//sqrt decomposition
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli dp[1000][1000],A[100003],num[1000],n,sqn,dps,cum[1000];
unordered_map<lli, lli> cnt[1000];
void precal()
{
	lli i,j,k,temp;
	j = 0;
	for (i = 0; i < n;)
	{
		for (k = 0; k < sqn && i < n;)
		{
			dp[j][k] = A[i];
			++i;
			++k;
		}
		num[j] = k;
		++j;
	}
	dps = j;
	for (i = 0; i < dps; ++i)
	{
		temp = dp[i][0];
		++cnt[i][temp];
		for (j = 1; j < num[i]; ++j)
		{
			temp ^= dp[i][j];
			++cnt[i][temp];
		}
		cum[i] = temp;
	}
}
void update(lli block,lli pos,lli val)
{
	lli i,temp;
	cnt[block].clear();
	dp[block][pos] = val;
	temp = dp[block][0];
	++cnt[block][temp];
	for (i = 1; i < num[block]; ++i)
	{
		temp ^= dp[block][i];
		++cnt[block][temp];
	}
	cum[block] = temp;
}
lli query(lli block,lli pos,lli val)
{
	lli i,ans,temp,temp1;
	ans = 0;
	temp = val;
	temp1 = 0;
	for (i = 0; i < block; ++i)
	{
		if (cnt[i].find(temp) != cnt[i].end())
			ans += cnt[i][temp];
		temp ^= cum[i];
		temp1 ^= cum[i];
	}
	for (i = 0; i <= pos; ++i)
	{
		temp1 ^= dp[block][i];
		if (temp1 == val)
		{
			++ans;
		}
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli q,i,j,a,b,c;
	cin>>n>>q;
	sqn = 1000;
	for (lli i = 0; i < n; ++i)
		cin>>A[i];
	precal();
	while(q--)
	{
		cin>>a>>b>>c;
		if(a == 1)
		{
			b--;
			if (b%sqn)
				update(b/sqn, b - (b/sqn)*sqn, c);
			else
				update(b/sqn - 1, sqn,c);
		}
		else
		{
			b--;
			if (b%sqn)
				cout<<query(b/sqn, b - (b/sqn)*sqn, c)<<endl;
			else
				cout<<query(b/sqn - 1, sqn,c)<<endl;
		}
	}
	return 0;
}