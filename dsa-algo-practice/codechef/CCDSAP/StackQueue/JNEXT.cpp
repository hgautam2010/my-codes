//SPOJ
#include <bits/stdc++.h>
using namespace std;

int get(char s[],int n)
{
	int i;
	for (i = n - 2; i >= 0;i--)
		if(s[i] < s[i+1])
			return i;
	return -1;
}

int getLow(char s[],int j,int n)
{
	int k = j + 1;
	for (int i = n - 1; i > j; --i)
		if(s[k] > s[i] && s[j] < s[i])
			k = i;
	return k;
}

int main(int argc, char const *argv[])
{
	int t,n,i,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);

		char s[n],ss[2];

		i = 0;
		while(i < n)
		{
			scanf("%s",&ss);
			s[i] = ss[0];
			i++;
		}

		s[i] = '\0';

		i = get(s,n);
		
		if(i == -1)
			{cout<<-1<<endl;continue;}

		k = getLow(s,i,n);

		swap(s[i],s[k]);

		sort(s+i+1,s+n);

		printf("%s\n", s);
	}
	return 0;
}