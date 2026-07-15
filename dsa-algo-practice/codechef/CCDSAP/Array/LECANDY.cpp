#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,c,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		int arr[n];
		s = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",arr + i);
			s+=arr[i];
		}
		printf("%s\n",((s<=c)?"Yes":"No"));
	}
}