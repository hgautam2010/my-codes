#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
	int h = ((n%2)?n/2:n/2 - 1);
	int i;
	for (i = 0; i < h; ++i)
		cout<<'a';
	if(n%2)
		{cout<<'b';i++;}
	else
		{cout<<"bb";i+=2;}

	for (; i < n; ++i)
		cout<<'a';
}

int main(int argc, char const *argv[])
{
	int t,p,n,i;
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		if(n <= 2 || p <= 2)
		{
			cout<<"impossible"<<endl;
			continue;
		}
		n /= p;
		for(i = 0; i < n; i++)
			print(p);
		cout<<endl;
	}
	return 0;
}