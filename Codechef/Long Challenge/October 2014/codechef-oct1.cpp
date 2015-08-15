#include<iostream>
using namespace std;

main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int N, M;
		cin>>N>>M;
		int i, max=0;
		int arr[N];
		for(i=0;i<N;i++)
		{
			cin>>arr[i];
			if(arr[i]>max)
				max=arr[i];
		}
		
		int sum=0;
		int flag=0;
		for(i=0;i<N;i++)
		{
			sum=sum+(max-arr[i]);
			if(arr[i]!=max)
			{
				flag=1;
			}
		}
		
		if(flag)
		{
			if((M-sum)==0 && M!=0)
			{
				cout<<"Yes\n";
			}
			else if((M-sum)%N==0)
			{
				cout<<"Yes\n";
			}
			else if(M==0)
			{
				cout<<"No\n";
			}
			else
			{
				cout<<"No\n";
			}
		}
		else
		{
			if(M%N==0)
			{
				cout<<"Yes\n";
			}
			else
			{
				cout<<"No\n";
			}
		}
	}
}
