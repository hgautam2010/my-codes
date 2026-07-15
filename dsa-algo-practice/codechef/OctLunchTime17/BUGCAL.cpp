#include <bits/stdc++.h>
using namespace std;
int intto(char ch)
{
	return ch - '0';
}
void print(string &a,string &b)
{
	stack<int> q;
	int i = a.length() - 1;
	int j = b.length() - 1;
	while(i >= 0 && j >= 0)
	{
		q.push((intto(a[i]) + intto(b[j]))%10);
		i--;
		j--;
	}
	while(i >= 0)
		q.push(intto(a[i--])%10);
	while(j >= 0)
		q.push(intto(b[j--])%10);

	while(!q.empty() && q.top() == 0)
		q.pop();

	if(q.empty())
		cout<<"0";
	else
		while(!q.empty())
		{
			cout<<q.top();
			q.pop();
		}
}
int main(int argc, char const *argv[])
{
	int t;
	string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		print(a,b);
		cout<<endl;
	}
	return 0;
}