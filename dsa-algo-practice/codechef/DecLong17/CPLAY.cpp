#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	string str;
	int i,sa,sb,a,b,w;
	while(getline(cin,str))
	{
		w = a = b = sa = sb = 0;
		for (i = 0; i < 10; ++i)
		{
			if(i%2 == 0)
			{
				if(str[i] - '0' == 1)
					a++;
				sa++;
			}
			if(i%2 == 1)
			{
				if(str[i] - '0' == 1)
					b++;
				sb++;
			}
			if(a + 5 - sa < b)
			{
				w = 1;
				cout<<"TEAM-B "<<i+1<<endl;
				break;
			}
			if(b + 5 - sb < a)
			{
				w = 1;
				cout<<"TEAM-A "<<i+1<<endl;
				break;
			}
		}
		if(w == 0)
		{
			for(;i < str.length(); ++i)
			{
				if(i%2 == 0)
				{
					if(str[i] - '0' == 1)
						a++;
					sa++;
				}
				if(i%2 == 1)
				{
					if(str[i] - '0' == 1)
						b++;
					sb++;
				}
				if(i%2 == 0)
					continue;
				if(a < b)
				{
					w = 1;
					cout<<"TEAM-B "<<i+1<<endl;
					break;
				}
				if(b < a)
				{
					w = 1;
					cout<<"TEAM-A "<<i+1<<endl;
					break;
				}
			}
		}
		if(w == 0)
		{
			cout<<"TIE"<<endl;
		}
	}
	return 0;
}