#include <bits/stdc++.h>
using namespace std;
long cnt[100001];
long dp[100001];
long arr[26];
long minn(long a,long b)
{
	return (a>b)?b:a;
}
long count(string &str,long a)
{
	if(cnt[a]!=-1)
		return cnt[a];
	long sum=0;
	for(long i=a+1;i<str.length();i++)
		sum+=abs(str[i]-str[a]);
	cnt[a]=sum;
	return sum;
}
long fun(string &str,long a)
{
	if(dp[a]!=-1)
		return dp[a];
	if(a>str.length())
		return INT_MAX;
	if(a==str.length())
		dp[a]=0;
	else
		dp[a]=minn(count(str,arr[str[a]-'a']),minn(abs(str[a]-str[a+1])+fun(str,a+1),));
	return dp[a];
}
int main()
{
	int T,i;
	string str;
	cin>>T;
	while(T--)
	{
		cin>>str;
		memset(dp,-1,sizeof(dp));
		memset(cnt,-1,sizeof(cnt));
		for(i=0;i<str.length();i++)
			arr[str[i]-'a']=i;
		cout<<fun(str,0)<<endl;
	}
}
