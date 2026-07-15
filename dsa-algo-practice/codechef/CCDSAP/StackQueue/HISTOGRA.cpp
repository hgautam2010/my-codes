#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli large(vector<lli> &v)
{
	stack<lli> s;
	lli i, sum, t;
	i = sum = 0;
	v.push_back(0);

	while(i < v.size())
	{
		if(s.empty() || v[s.top()] < v[i])
			s.push(i++);
		else
		{
			t = s.top();
			s.pop();
			sum = max(sum, v[t]*((s.empty())?i:i - s.top() - 1));
		}
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	lli n;

	while(1)
	{
		cin>>n;

		if (n == 0)
			return 0;

		vector<lli> v(n);

		for (lli i = 0; i < n; ++i)
			cin>>v[i];

		cout<<large(v)<<endl;
	}
	return 0;
}