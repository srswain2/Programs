#include<iostream>
#include<string>
//#include<cstdint>
//#include<stdint.h>
using namespace std;

main()
{
	int test;
	cin>>test;
	while(test--)
	{
		char str[100010];
		int i=0;
		for(i=0;i<=100;i++)
		{
			if(i%2==0)
				str[i]='l';
			else
				str[i]='r';
		}
		i=0;
		double ans, base=1;
		while(str[i]=='l' || str[i]=='r')
		{
			if(i%2==0)
			{
				if(str[i]=='l')
				{
					ans=base*2;
				}
				else
				{
					ans=base*2+2;
				}
			}
			else
			{
				if(str[i]=='l')
				{
					ans=base*2-1;
				}
				else
				{
					ans=base*2+1;
				}
			}
			base=ans;
			cout<<ans<<"\n";
			i++;
		}
		cout<<ans<<"\n";
	}
}
