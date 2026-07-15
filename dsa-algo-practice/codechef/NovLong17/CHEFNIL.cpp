#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int m,n,i,j,k,b,d;
	long s;
	cin>>n>>m;
	int a[m][n][n];
	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			for (k = 0; k < n; ++k)
			{
				cin>>a[i][j][k];
			}
		}
	}
	s = 0;
	j = 0;
	k = 0;
	b = 0;
	d = 1;
	for (i = 0; i < m; ++i)
	{
		cout<<j<<" "<<k<<endl;
		s+=a[b++][j][k];
		k = k + d;
		if(k == -1 || k == n)
		{
			j++;
			if(d == -1)
				d = 1;
			else
				d = -1;
			k+=d;
		}
	}
	cout<<s;
	return 0;
}