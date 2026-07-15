#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int t,i,A,B,c,flag;
	cin>>t;

	while(t--)
	{
		string s;
		cin>>s;
		
		A = B = i = 0;
		
		while(i < s.length() && s[i] == '.')
			i++;

		flag = ((s[i] == 'A')?1:0);

		for (; i < s.length(); ++i)
		{
			if(s[i] != '.')
				flag = ((s[i] == 'A')?1:0);
			
			if(s[i] == '.')
			{
				c = 0;
				while(i < s.length() && s[i] == '.')
					{c++;i++;}
				if(i < s.length())
					if(flag && s[i] == 'A')
						A += c;
					if(!flag && s[i] == 'B')
						B += c;
			}
			if(i < s.length())
				if(s[i] == 'A')
					A++;
				else
					B++;
			if(s[i] != '.')
				flag = ((s[i] == 'A')?1:0);
		}

		cout<<A<<" "<<B<<endl;
	}
}