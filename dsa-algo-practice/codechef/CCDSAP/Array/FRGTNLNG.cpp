#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,k,l;
	cin>>t;
	while(t--)
	{
		string s;
		vector<string> lst,srch;
		vector<string>::iterator it;
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>s;
			srch.push_back(s);
		}
		while(k--)
		{
			cin>>l;
			while(l--)
			{
				cin>>s;
				lst.push_back(s);
			}
		}

		for (int i = 0; i < n; ++i)
		{
			it = find(lst.begin(), lst.end(), srch[i]);
			cout<<((it != lst.end())?"YES ":"NO ");
		}

		cout<<endl;
	}
	return 0;
}