#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,m,x,y,a,c;
	cin>>t;
	while(t--)
	{
		cin>>m>>x>>y;
		int houses[101] = {0},tot;
		houses[0] = 1;
		tot = x * y;
		c = 0;
		for (int i = 0; i < m; ++i)
		{
			cin>>a;
			for(int j = ((a - tot>0)?(a - tot):0); j <= a + tot && j <= 100; j++)
				houses[j] = 1;
		}
		for (int i = 0; i < 101; ++i)
			if(houses[i] == 0)
			{
				c++;
			}
		printf("%d\n", c);
	}
	return 0;
}