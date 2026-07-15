#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int x;
	stack<int> ms;
	cin>>s;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] == '(')
			ms.push(s[i]);
		else if(s[i] == ')')
		{
			x = 0;
			while(!ms.empty() and ms.top() != '(')
			{
				x += ms.top();
				ms.pop();
			}
			ms.pop();
			ms.push(x);
		}
		else if(s[i] >= '1' and s[i] <= '9')
		{
			x = ms.top();
			ms.pop();
			ms.push(x*(s[i] - '0'));
		}
		else
		{
			if(s[i] == 'H')
				ms.push(1);
			else if(s[i] == 'C')
				ms.push(12);
			else
				ms.push(16);
		}
	}
	x = 0;
	while(!ms.empty())
	{
		x += ms.top();
		ms.pop();
	}
	cout<<x<<endl;
	return 0;
}