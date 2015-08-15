#include<iostream>
using namespace std;

main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,i;
		long long ans=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		i=0;
		while(i!=n)
		{
			outer:
			int j, right_pt=999999, left_pt=-999999;
			
			if(arr[i]>0)
			{
				for(j=i+1;j<n;j++)
				{
					if(arr[j]<0)
					{
						right_pt=j;
						break;
					}
				}
				for(j=i-1;j>=0;j--)
				{
					if(arr[j]<0)
					{
						left_pt=j;
						break;
					}
				}
				if((right_pt-i)>=(i-left_pt))
				{
					if(arr[i]>(-arr[left_pt]))
					{
						ans=ans+(-arr[left_pt])*(i-left_pt);
						arr[i]=arr[i]+arr[left_pt];
						arr[left_pt]=0;
						goto outer;
					}
					else
					{
						ans=ans+(arr[i])*(i-left_pt);
						arr[left_pt]=arr[left_pt]+arr[i];
						arr[i]=0;
					}
				}
				else
				{
					if(arr[i]>(-arr[right_pt]))
					{
						ans=ans+(-arr[right_pt])*(right_pt-i);
						arr[i]=arr[i]+arr[right_pt];
						arr[right_pt]=0;
						goto outer;
					}
					else
					{
						ans=ans+(arr[i])*(right_pt-i);
						arr[right_pt]=arr[right_pt]+arr[i];
						arr[i]=0;
					}
				}
			}
			i=i+1;
		}
		
		cout<<ans<<"\n";
	}
}
