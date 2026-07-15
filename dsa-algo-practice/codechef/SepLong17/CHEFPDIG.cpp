#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,arr[11];
	char ch;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		memset(arr,0,sizeof(arr));
		do
		{
			ch=getchar();
			if(ch>='0' && ch<='9' && arr[ch-'0']<2)
				arr[ch-'0']++;
		}while(ch>='0' && ch<='9');
		ch='A';
		for(i=6;i<9;i++)
		{
			j=((i==6)?5:0);
			for(;j<9;j++)
			{
				if((i==j && arr[i]>1) || ( i!=j && arr[i]>0 && arr[j]>0))
					putchar(ch);
				ch++;
			}
			if((i==j && arr[i]>1) || ( i!=j && arr[i]>0 && arr[j]>0))
					putchar(ch);
				ch++;
		}
		if(arr[9]>0 && arr[0]>0)
			printf("Z");
		printf("\n");
	}
}
