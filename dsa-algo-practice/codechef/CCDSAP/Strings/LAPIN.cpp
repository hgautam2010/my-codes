#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,f;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		f = 0;
		int a[30]={0},b[30]={0};
		for (int i = 0; i < s.length()/2; ++i)
			a[s[i]-'a']++;
		for (int i = ((s.length()%2)?s.length()/2+1:s.length()/2); i < s.length(); ++i)
			b[s[i]-'a']++;
		for (int i = 0; i < 30; ++i)
			if(a[i] != b[i])
				f = 1;
		cout<<((f)?"NO":"YES")<<endl;
	}
	return 0;
}