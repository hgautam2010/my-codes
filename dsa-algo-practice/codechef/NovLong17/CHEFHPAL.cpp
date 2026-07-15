#include <bits/stdc++.h>
using namespace std;

void pi(int a, int b)
{
	cout<<((b==1)?a:1)<<" ";
	char ch = 'a';
	for (int i = 0; i < a; ++i)
		cout<<(char)(ch + i%b);
}

void po(int n)
{
	int a,b,c,i;
	a = n/2 + n%2;
	b = n/2;
	c = 1;

	while(c + 2 <= a && c + 2 <= b)
	{
		a--;
		b--;
		c += 2;
	}

	cout<<max(a,max(c,b))<<" ";
	for (i = 0; i < a; ++i)
		cout<<'a';
	for (i = 0; i < c/2; ++i)
		cout<<"ba";
	for (i = 0; i < b; ++i)
		cout<<'b';
}

void pa(int n)
{
	cout<<4<<" ";
	string str("aababb");
	int l = str.length();
	for (int i = 0; i < n; ++i)
		cout<<str[i%l];
}

int main()
{
	ios::sync_with_stdio(false);
	int t,n,a,b,i;
	cin>>t;
	a = 2;
	while(t--)
	{
		cin>>n>>a;
		(a!=2)?(pi(n,a)):((n <= 10)?po(n):pa(n));
		cout<<endl;
	}

	return 0;
}