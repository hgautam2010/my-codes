#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> a(s.length());
	char mn = 'z' + 1;
	int in = a.size() - 1;
	for(int i = a.size() - 1; i >= 0; i--)
	{
		if(mn >= s[i])
		{
			mn = s[i];
			a[i] = i;
			in = i;
		}
		else
			a[i] = in;
	}
	stack<char> q;
	int i = 0;
	while(i < s.length())
	{
		if( i < a[i] && i < s.length())
			q.push(s[i++]);
		else if(a[i] == i && i < s.length())
			cout<<s[i++];
		while(!q.empty() and a[i] < s.length() and a[i] >= 0 and s[a[i]] >= q.top())
		{
			cout<<q.top();
			q.pop();
		}
	}		
	while(!q.empty())
	{
		cout<<q.top();
		q.pop();
	}
	cout<<endl;
}