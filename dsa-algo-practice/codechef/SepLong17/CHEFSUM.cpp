#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	unsigned long long int A[100000],B[100000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&A[0]);
		B[0]=A[0];
		for(int i=1;i<n;i++)
		{
			scanf("%d",&A[i]);
			B[i]=B[i-1] + A[i];
		}
		for(int i=n-2;i>=0;i--)
		{
			A[i]+=A[i+1];
		}
		int j=0;
		for(int i=0;i<n;i++)
		{
			if(A[j]+B[j] > A[i]+B[i])
				j=i;
		}
		printf("%d\n",j+1);
	}
}
