#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,mx,t,i,a,b,c;
	cin>>n;
	vector<int> v(n);

	for (i = 0; i < n; ++i)
		cin>>v[i];

	stack<int> q;
	mx = -1;
	i = 1;
	q.push(v[0]);

	while(1)
	{
		if(i < n and (q.empty() || q.top() > v[i]))
		{
			if(!q.empty())
			{
				t = q.top();
				if(mx < (t xor v[i]))
				{
					mx = t xor v[i];
					a = t; 
					b = v[i];
				}
			}
			q.push(v[i++]);
		}
		else
		{
			t = q.top();
			q.pop(); 
			if(i==n and q.empty())
				{break;}
			int j = ((i == n)?q.top():i);
			if (i == n)
			{
				if(mx < (t xor j))
				{
					mx = t xor j;
					a = t; 
					b = j;
				}
			}
			else
			{
				if(mx < (t xor v[j]))
				{
					mx = t xor v[j];
					a = t; 
					b = v[j];
				}
			}
		}
		if(q.empty() && i >= n)
			break;
	}

	cout<<mx<<endl;

	return 0;
}