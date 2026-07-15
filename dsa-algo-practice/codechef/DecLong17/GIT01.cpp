#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	int t,m,n,co1,co2;
	char ch;
	cin>>t;
	while(t--)
	{
		co1 = co2 = 0;
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin>>ch;
				if((i+j)%2 == 0)
				{
					if(ch == 'R')
					{
						co2+=5;
					}
					else
					{
						co1+=3;
					}
				}
				else
				{
					if(ch == 'R')
					{
						co1+=5;
					}
					else
					{
						co2+=3;
					}
				}
			}
		}
		cout<<min(co1,co2)<<endl;
	}
	return 0;
}