#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,n,sol,a;
	cin>>T;
	while(T--)
	{
		cin>>n;
		sol=0;
		while(n--)
		{
			cin>>a;
			sol=sol|a;
		}
		cout<<sol<<endl;
	}
}
