#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,c,i;
	string s;
	cin>>t;
	while(t--)
	{
		c = 0;
		cin>>n>>s;
		for (i = 0; i < s.length(); ++i)
			if(s[i] == '1')
				c++;

		if(c%2)
			cout<<c*((c+1)/2)<<endl;
		else
			cout<<c/2*(c+1)<<endl;
	}
	return 0;
}