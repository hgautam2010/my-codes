#include <bits/stdc++.h>
using namespace std;
int get(char a,char b)
{
	if(a == b)
		return 1;
	if(a == '{' and b == '}')
		return 2;
	return 0;
}
int main(int argc, char const *argv[])
{
	string s;
	int c, k = 1;
	while(1)
	{
		cin>>s;
		
		if(s[0] == '-')
			return 0;

		cout<<k++<<". ";
		c = 0;
		char ch;

		stack<char> q;

		for(int i = 0; i < s.length(); i++)
		{
			if(q.empty() || s[i] == '{')
				q.push(s[i]);
			else
			{
				if( q.top() == '{' )
					q.pop();
				else
					q.push(s[i]);
			}
		}
		
		while(!q.empty())
		{
			ch = q.top();
			q.pop();
			c += get(ch, q.top());	
			q.pop();
		}
		cout<<c<<endl;
	}
	return 0;
}