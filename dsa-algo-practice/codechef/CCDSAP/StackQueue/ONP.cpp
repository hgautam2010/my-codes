#include <bits/stdc++.h>
using namespace std;
int prio(char ch)
{
	if(ch == '+')
		return 1;
	if(ch == '-')
		return 2;
	if(ch == '*')
		return 3;
	if(ch == '/')
		return 4;
	if(ch == '^')
		return 5;
}
int main(int argc, char const *argv[])
{
	int t,i;
	string s;
	cin>>t;
	while(t--)
	{
		s = "";
		cin>>s;
		stack<char> q;
	
		for (i = 0; i < s.length(); ++i)
		{
			if(s[i] == '(')
				q.push(s[i]);
			else if(s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-' || s[i] == '^')
			{
				while(!q.empty() && prio(s[i]) < prio(q.top()))
				{
					cout<<q.top();
					q.pop();
				}
				q.push(s[i]);
			}
			else if(s[i] == ')')
			{
				while(!q.empty() && q.top() != '(')
				{
					cout<<q.top();
					q.pop();
				}
				if(!q.empty() && q.top() == '(')
					q.pop();
			}
			else
				cout<<s[i];
		}

		while(!q.empty())
		{
			cout<<q.top();
			q.pop();
		}

		cout<<endl;
	}
	return 0;
}