#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,l,s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		l = INT_MAX;
		s = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&arr[i]);
			if(l > arr[i])
				l = arr[i];
			s+=arr[i];
		}
		printf("%d\n",s - n*l);
	}
	return 0;
}