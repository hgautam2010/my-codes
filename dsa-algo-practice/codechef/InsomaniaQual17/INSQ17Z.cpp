#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,ca,cb;
	unsigned long long int A[1001],B[1001],maxA,maxB;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		maxA=0;maxB=0;
		for(i=0;i<n;i++)
		{
			scanf("%llu",&A[i]);
			if(maxA < A[i])
				maxA=A[i];
		}
		for(i=0;i<n;i++)
		{
			scanf("%llu",&B[i]);
			if(maxB < B[i])
				maxB=B[i];
		}
		ca=cb=0;
		for(i=0;i<n;i++)
		{
			if(maxA == A[i])
				ca++;
			if(maxB == B[i])
				cb++;
		}
		printf("%d\n",ca*cb);
	}
}
