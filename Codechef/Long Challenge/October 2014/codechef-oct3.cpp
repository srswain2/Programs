#include<iostream>
using namespace std;

main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int R, G, B, M,i;
		cin>>R>>G>>B>>M;
		long arr1[R], arr2[G], arr3[B];
		long arr[3];
		long max=0;
		
		for(i=0;i<R;i++)
		{
			cin>>arr1[i];
			if(max<arr1[i])
				max=arr1[i];
		}
		arr[0]=max;
		max=0;
		for(i=0;i<G;i++)
		{
			cin>>arr2[i];
			if(max<arr2[i])
				max=arr2[i];
		}
		arr[1]=max;
		max=0;
		for(i=0;i<B;i++)
		{
			cin>>arr3[i];
			if(max<arr3[i])
				max=arr3[i];
		}
		arr[2]=max;
		int maximum;
		while(M--)
		{
			if(arr[0]>arr[1])
			{
				if(arr[0]>arr[2])
				{
					arr[0]/=2;
				}
				else
				{
					arr[2]/=2;
				}
			}
			else
			{
				if(arr[1]>arr[2])
				{
					arr[1]/=2;
				}
				else
				{
					arr[2]/=2;
				}
			}
		}
		
		maximum = (arr[0] > ((arr[1] > arr[2]) ? arr[1] : arr[2])) ? arr[0] : ((arr[1] > arr[2]) ? arr[1] : arr[2]);
		cout<<maximum<<"\n";
	}
}
