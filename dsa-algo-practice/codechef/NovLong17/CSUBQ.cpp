#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int *lft;
int *rht;
int L,R;
void lupdate(vector<int> &v,int l,int r)
{
	int i;
	stack<int> s;
	for(i = l; i <= r; i++)
	{
		if(s.empty() || (!s.empty() && v[s.top()] > v[i]))
			s.push(i);
		else
		{
			while(!s.empty() && v[s.top()] <= v[i])
			{
				lft[i] += lft[s.top()];
				s.pop();
			}
			s.push(i);
		}
	}
}

void rupdate(vector<int> &v,int l,int r)
{
	int i;
	stack<int> s;
	for(i = r; i >= l; i--)
	{
		if(s.empty() || (!s.empty() && v[s.top()] >= v[i]))
			s.push(i);
		else
		{
			while(!s.empty() && v[s.top()] < v[i])
			{
				rht[i] += rht[s.top()];
				s.pop();
			}
			s.push(i);
		}
	}
}

ull print(vector<int> &a,int b,int c)
{
	int i;

	for (i = b; i <= c; ++i)
	{
		lft[i] = 1;
		rht[i] = 1;
	}

	lupdate(a,b,c);
	rupdate(a,b,c);

	ull sum = 0;
	for(i = b; i <= c; i++)
	{
		if(a[i] >= L && a[i] <= R)
			sum+=(1ULL*lft[i]*rht[i]);
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n,q,a,b,c;
	cin>>n>>q>>L>>R;
	vector<int> v(n+1,0);
	lft = new int[n + 1];
	rht = new int[n + 1];
	while(q--)
	{
		cin>>a>>b>>c;
		if(a == 1)
			v[b] = c;
		else
			cout<<print(v,b,c)<<endl;
	}
	return 0;
}