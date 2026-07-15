#include <bits/stdc++.h>
#define mp(a,b) make_pair(a,b)
using namespace std;
int main(int argc, char const *argv[])
{
	int t,c,mx,l;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		l = c = 0;
		stack<char> q;
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i] == '<')
				q.push(s[i]);
			else if(!q.empty() && s[i] == '>')
			{
				q.pop();
				c+=2;
			}
			else
				break;
			if(q.empty())
			{
				l+=c;
				c = 0;
			}
		}
		cout<<l<<endl;
	}
	return 0;
}