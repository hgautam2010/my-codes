#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
	int *arr,i;
	arr=new int[1000000000];
	arr[0]=0;
	for(i=1;i<1000000000;i++)
	{
		arr[i]=(arr[i-1]+ __builtin_popcount(i) * i)%mod;
	}
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",arr[n]);
	}
}
