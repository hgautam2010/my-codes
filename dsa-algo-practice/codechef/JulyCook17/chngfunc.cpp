#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int a,b,i,n,j,c=0;
	cin>>a>>b;
	for(i=1;i<=a;i++)
		for(j=1;(i+j)*(i+j) - i*i <= b && (i+j)*(i+j) - i*i > 0;j++)
			c++;
	cout<<c;
	return 0;
}
