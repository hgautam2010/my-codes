#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	srand(time(NULL));
	int n,m;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<(rand()%10 - 5)<<" ";
		}
		cout<<endl;
	}
}