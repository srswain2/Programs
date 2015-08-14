#include<iostream>
#include<vector>
using namespace std;

int countFact(int n, int p)
{
	int k=0;
	while (n>0)
	{
		k+=n/p;
		n/=p;
	}
	return k;
}

/* This function calculates (a^b)%MOD */
long long pow(int a, int b, long MOD)
{
	long long x=1,y=a; 
	while(b > 0)
	{
		if(b%2 == 1)
		{
			x=(x*y);
			if(x>MOD) x%=MOD;
		}
		y = (y*y);
		if(y>MOD) y%=MOD; 
		b /= 2;
	}
	return x;
}

long long C(int n, int r, long MOD)
{
	long long res = 1;
	vector<bool> isPrime(n,1);
	for (int i=2; i<=n; i++)
		if (isPrime[i])
		{
			for (int j=2*i; j<=n; j+=i)
				isPrime[j]=0;
			int k = countFact(n,i) - countFact(r,i) - countFact(n-r,i);  
			res = (res * pow(i, k, MOD)) % MOD;
		}
	return res;
}

main()
{
	int N;
	cin>>N;
	if(N<=12)
	{
		cout<<0<<"\n";
	}
	else if(N==13 || N==14)
	{
		cout<<1<<"\n";
	}
	else if(N==15)
	{
		cout<<7<<"\n";
	}
	else
	{
		if(N%2==0)
			cout<<C(N/2-1,6,1000000007)<<"\n";
		else
			cout<<C(N/2,6,1000000007)<<"\n";
	}
}
