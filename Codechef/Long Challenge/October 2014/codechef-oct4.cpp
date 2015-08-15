#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include <utility>

using namespace std;

main()
{
	int test;
	scanf("%d", &test);
	while(test--)
	{
		int N, M;
		scanf("%d %d", &N, &M);
		vector<pair<int,char> > a(M);
		int i;
		for(i=0;i<M;i++)
		{
			int in;
			char ch;
			cin>>ch;
			scanf("%d", &in);
			a[i].first=in;
			a[i].second=ch;
		}
		sort(a.begin(), a.end());
		long long ans=1;
		for(i=0;i<M-1;i++)
		{
			if(a[i].second==a[i+1].second)
			{
				continue;
			}
			else
			{
				ans=ans*(a[i+1].first-a[i].first)%1000000009;
			}
		}
		
		cout<<ans<<"\n";
		
	}
}
