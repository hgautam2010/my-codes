#include <bits/stdc++.h>
using namespace std;

void update(int BIT[], int i,int n,int v)
{
	i++;
	while(i <= n)
	{
		BIT[i]+=v;
		i += i & (-i);
	}
}

int get(int BIT[],int i,int n)
{
	int sum = 0;
	i++;
	while(i > 0)
	{
		sum+=BIT[i];
		i -= i & (-i);
	}
	return sum;
}

void create(int BIT[],int arr[],int n)
{
	for (int i = 0; i <= n; ++i)
		BIT[i] = 0;

	for (int i = 0; i < n; ++i)
		update(BIT,i,n,arr[i]);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int BIT[n+1],arr[n];
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	create(BIT,arr,n);
	cout<<get(BIT,5,n);
	return 0;
}