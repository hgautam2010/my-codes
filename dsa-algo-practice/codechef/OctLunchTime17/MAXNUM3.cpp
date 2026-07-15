#include <bits/stdc++.h>
using namespace std;
typedef long int li;

li sum;

int ctoi(char ch)
{
	return (ch - '0');
}

bool div3(char ch)
{
	return ((sum - ctoi(ch))%3 == 0);
}

void print(string &s,int l)
{
	for (int i = 0; i < s.length(); ++i)
		if (i != l)
			cout<<s[i];
}

int check(string &s)
{
	li l = s.length();

	if(s.length() <= 1)
	{
		cout<<-1;
		return -2;
	}

	if(ctoi(s[l - 1]) % 2 == 1 && ctoi(s[l - 2])%2 == 1)
	{
		cout<<-1;
		return -2;
	}

	if(ctoi(s[l - 1]) % 2 == 1 && ctoi(s[l - 2])%2 == 0)
	{
		if(div3(s[l-1]))
		{
			print(s,l-1);
			return -2;
		}
		else
		{
			cout<<-1;
			return -2;
		}
	}

	if(ctoi(s[l - 1]) % 2 == 0 && ctoi(s[l - 2])%2 == 1)
		return 0;

	return 1;
}

void delet(string &s, int x)
{
	li lst = ((x==1)?s.length()-1:s.length()-2);
	li low = 12,flag = -1;

	for (int i = 0; i < lst - 1; ++i)
	{
		if (ctoi(s[i]) < ctoi(s[i+1])  && div3(s[i]))
		{
			print(s,i);
			return;
		}

		if(div3(s[i]) && low >= ctoi(s[i]))
		{
			low=x;
			flag=i;
		}
	}
	if(flag != -1)
		print(s,low);
	else
		cout<<-1;
}

int main(int argc, char const *argv[])
{
	int t,k;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		sum = 0;
		for (int i = 0; i < s.length(); ++i)
			sum+=ctoi(s[i]);

		k = check(s);

		if(k == -2)
		{
			cout<<endl;
			continue;
		}

		delet(s,k);
		cout<<endl;
	}
	return 0;
}