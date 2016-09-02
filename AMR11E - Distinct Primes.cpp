#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <stack> 
#define size 1000007
#define ll long long
#define forn(i ,n) for(ll i = 0 ; i < (ll)(n) ; i++)
#define fora(i,a,n) for(ll i = (ll)(a) ; i <= (ll)(n) ; i++)
using namespace std;
 
ll prime_factor(ll num)
{
	ll i,j,k,n,count = 0 ;
	while(num % 2 == 0 )
	{
		num = num /2 ;
		count = 1;
	}
	for (int i = 3; i*i < num; ++i)
	{
		j = 1;
		while(num % i == 0)
		{
			num = num / i;
			if(j < 2)
				count++;
            j++;
		}
		if(count >= 3)
			return count;
	}
	if(num > 2)
		count++;
	return count;
}
 
int main() 
{
	ll m,n,i,j,k,flag;
	vector<ll> v;
	for (int i = 3; i < 3000; ++i)
	{
		if(prime_factor(i) >= 3 )
		{
		        v.push_back(i);
		}
	}
	cin>>n;
	while(n--)
	{
	    cin>>j;
	    cout<<v[j -1 ]<<endl;
	}
	return 0;
}
