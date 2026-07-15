#include <bits/stdc++.h>
using namespace std;

int *BIT,n,p;

void update(int i,int v)
{
	i++;
	while(i <= n)
	{
		BIT[i]=(BIT[i]*v)%p;
		i+=i&(-i);
	}
}

int get(int i)
{
	int sum = 1;
	i++;
	while(i > 0)
	{
		sum = (BIT[i]*sum)%p;
		i -= i&(-i);
	}
}

void create(int arr[])
{
	BIT = new int[n+1];

	for (int i = 0; i <= n; ++i)
		BIT[i] = 1;

	for (int i = 0; i < n; ++i)
		update(i,arr[i]);
}

int main(int argc, char const *argv[])
{
	cin>>n;
	int arr[n],t,l,r;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	cin>>t;
	for (int i = 0; i < n; ++i)
	{
		cout<<get(i)<<" ";
	}
	while(t--)
	{
		cin>>l>>r>>p;
		create(arr);
		cout<<(get(r) - get(l))%p<<endl;
	}
	return 0;
}