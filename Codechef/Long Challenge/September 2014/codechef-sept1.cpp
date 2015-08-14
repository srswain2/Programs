#include<iostream>
using namespace std;

main()
{
	int N, M, i;
	cin>>N>>M;
	int arr[N], arr1[N];
	for(i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	long long temp=0;
	while(M--)
	{
		char mode;
		int num;
		cin>>mode;
		cin>>num;
		if(mode=='R')
		{
			int ans, t;
			if(temp<0)
			{
				t=(temp%N);
				ans=(N-t+num-1)%N;
				cout<<arr[ans]<<"\n";
			}
			else
			{
				t=(temp%N);
				ans=(N-t+num-1)%N;
				cout<<arr[ans]<<"\n";
			}			
		}
		else if(mode=='C')
		{
			temp=temp-num;
		}
		else if(mode=='A')
		{
			temp=temp+num;
		}
	}
}
