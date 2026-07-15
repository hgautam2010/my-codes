#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,f,a,i,j,l;
	cin>>t;
	while(t--)
	{
		scanf("%d",&n);
		int arr[n],vis[8]={0};
		f = 0;

		for (i = 0; i < n; ++i)
		{
			scanf("%d",&arr[i]);
			vis[arr[i]]=1;
			if(arr[i] < 1 || arr[i] > 7)
				f = 1;
		}

		for (i = 1; i < 8; ++i)
			if (vis[i] == 0)
				f = 1;

		a = n/2;

		if(arr[0] != 1 || arr[n-1] != 1 || arr[a] != 7)
			f = 1;

		if(f == 1)
			{printf("no\n");continue;}

		i = ((n%2)?a:a-1);
		j = a;
		l = 7;
		
		while(i>=0)
		{
			if (arr[i] != arr[j] || arr[i] > l)
				f = 1;
			if (arr[i] != l)
				l--;
			i--;
			j++;
		}

		printf("%s\n",((f == 1)?"no":"yes") );
	}
	return 0;
}