#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
bool isprime(ll n)
{
	ll i,j,k;
	if(n == 2 || n == 3 || n == 5 || n == 7)
	{
		return 1;
	}
	if(n % 2 == 0)
	    return 0 ;
	for (i = 3 ; i*i <= n; i += 2)
	{
		if(n % i == 0)
		{
			return 0 ;
		}
	}
	return 1;
}
 
int main() 
{
	ll i,j,k,t,n,a,b;
	cin>>n;
	while(n--)
	{
	    cin>>a>>b;
	    for (i = a ; i <= b; ++i)
	    {
		    if(isprime(i))
		    {
			    if( i!= 1)
			    {
				    cout<<i<<endl;
			    }
		    }
	    }
	}
	return 0;
}
