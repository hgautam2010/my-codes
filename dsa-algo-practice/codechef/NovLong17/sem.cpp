#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int P;

int query(int seg[],int ql,int qr,int l,int r,int x)
{
	if(r < ql || l > qr)
		return 1;

	if(ql <= l && qr >= r)
		return seg[x];

	int mid = (l+r)/2;

	return int((1ULL*query(seg,ql,qr,l,mid,2*x+1)*query(seg,ql,qr,mid+1,r,2*x+2))%P);
}

void construct(int arr[], int seg[], int l, int h, int x)
{
	if( l == h)
	{
		seg[x] = arr[l];
		return;
	}

	int mid = (l + h)/2;

	construct(arr,seg,l,mid,2*x+1);
	construct(arr,seg,mid+1,h,2*x+2);

	seg[x] = int((1ULL*seg[2*x+1]*seg[2*x+2])%P);
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int seg[5000000];
	int a[1000010],q,b[1000010],t,n,i,m,li,ri,la,ra;
	long long int x;
	cin>>t;
	while(t--)
	{
		cin>>n>>P>>q;
		for(i = 0; i < n; i++)
			cin>>a[i];
		m = q/64 + 2;
		for(i = 0; i < m; i++)
			cin>>b[i];
		construct(a, seg, 0, n-1, 0);
		x = 0;
		for(i = 0; i < q; i++)
		{
			if(i%64 == 0)
			{
				li = (b[i/64] + x)%n;
				ri = (b[i/64 + 1] + x)%n;
			}
			else
			{
				li = (la + x)%n;
				ri = (ra + x)%n;
			}
			if(li > ri)
				swap(li,ri);
			la = li;
			ra = ri;
			x = (query(seg,li,ri,0,n-1,0)+1)%P;
			
		}
		cout<<x<<endl;
	}

	return 0;
}