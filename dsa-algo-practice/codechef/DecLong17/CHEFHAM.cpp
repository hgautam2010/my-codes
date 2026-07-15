//Solved
#include <bits/stdc++.h>
using namespace std;
int freq[100005],loc[2][100005],one[100005],two[100005],n,A[100005],a,b,B[100005];
void abr()
{
	cout<<2<<endl;
	swap(A[loc[0][two[0]]],A[loc[0][one[0]]]);
	for (int i = 0; i < n; ++i)
		cout<<A[i]<<" ";
}
void ar()
{
	cout<<n<<endl;
	for (int i = 1; i < b; ++i)
	{
		B[loc[0][two[i]]] = A[loc[0][two[i-1]]];
		B[loc[1][two[i]]] = A[loc[1][two[i-1]]];
	}
	B[loc[0][two[0]]] = A[loc[1][two[b-1]]];
	B[loc[1][two[0]]] = A[loc[0][one[0]]];
	B[loc[0][one[0]]] = A[loc[0][two[b-1]]];
	for (int i = 0; i < n; ++i)
	{
		cout<<B[i]<<" ";
	}
}
void br()
{
	cout<<n<<endl;
	B[loc[0][one[0]]] = A[loc[0][two[0]]];
	B[loc[0][one[1]]] = A[loc[1][two[0]]];
	for (int i = 2; i < a; ++i)
		B[loc[0][one[i]]] = A[loc[0][one[i-2]]];
	B[loc[0][two[0]]] = A[loc[0][one[a-2]]];
	B[loc[1][two[0]]] = A[loc[0][one[a-1]]];
	for (int i = 0; i < n; ++i)
	{
		cout<<B[i]<<" ";
	}
}
void r()
{
	cout<<n<<endl;
	B[loc[0][two[0]]] = A[loc[0][one[a-2]]];
	B[loc[1][two[0]]] = A[loc[0][one[a-1]]];
	for (int i = 1; i < b; ++i)
	{
		B[loc[0][two[i]]] = A[loc[0][two[i-1]]];
		B[loc[1][two[i]]] = A[loc[1][two[i-1]]];
	}
	B[loc[0][one[0]]] = A[loc[0][two[b-1]]];
	B[loc[0][one[1]]] = A[loc[1][two[b-1]]];
	for (int i = 2; i < a; ++i)
	{
		B[loc[0][one[i]]] = A[loc[0][one[i-2]]];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<B[i]<<" ";
	}
}
void bn()
{
	cout<<n<<endl;
	int B[n];
	B[loc[0][two[0]]] = A[loc[0][two[b-1]]];
	B[loc[1][two[0]]] = A[loc[1][two[b-1]]];
	for (int i = 1; i < b; ++i)
	{
		B[loc[0][two[i]]] = A[loc[0][two[i-1]]];
		B[loc[1][two[i]]] = A[loc[1][two[i-1]]];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<B[i]<<" ";
	}
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		memset(freq,0,sizeof(freq));
		memset(loc,0,sizeof(loc));
		memset(one,0,sizeof(one));
		memset(two,0,sizeof(two));
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
			loc[freq[A[i]]][A[i]] = i;
			++freq[A[i]];
		}
		b = a = 0;
		for (int i = 0; i < 100005; ++i)
		{
			if (freq[i] == 2)
				two[b++] = i;
			else if( freq[i] == 1)
				one[a++] = i;
		}
		if(b == 0 && a > 1)
		{
			cout<<n<<endl;
			for (int i = 1; i < n; ++i)
			{
				cout<<A[i]<<" ";
			}
			cout<<A[0];
		}
		else if((b == 0 && a == 1) ||  (a == 0 && b == 1))
		{
			cout<<0<<endl;
			for (int i = 0; i < n; ++i)
				cout<<A[i]<<" ";
		}
		else if( a == 0 && b > 1)
		{
			bn();
		}
		else if(a == 1 && b == 1)
		{
			abr();
		}
		else if (a == 1)
		{
			ar();
		}
		else if (b == 1)
		{
			br();
		}
		else
		{
			r();
		}
		cout<<endl;
	}
	return 0;
}