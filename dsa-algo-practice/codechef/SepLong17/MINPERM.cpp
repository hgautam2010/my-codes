#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(i%2)
			printf("%d ",i+1);
		else
			printf("%d ",i-1);
	}
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2)
		{
			print(n-3);
			printf("%d %d %d",n-1,n,n-2);
		}
		else
			print(n);
		printf("\n");
	}
}
