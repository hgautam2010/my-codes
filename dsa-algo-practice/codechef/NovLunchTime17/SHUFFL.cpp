#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int t,m,x,y;
	cin>>t;
	while(t--)
	{
		cin>>m>>x>>y;
		cout<<(m xor m/2)<<endl;
	}
	return 0;
}