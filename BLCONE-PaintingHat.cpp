#include <bits/stdc++.h>
#define ld long double
#define  precision 0.0000001
using namespace std;
 
ld A,B,C,ans;
 
ld equ(ld h)
{
    return A*h*h*h + B*h*h + C ;
}
 
 
ld binarysearch()
{
    ld low=0, high=200,mid;
    while(low < high)
    {
        mid = (low + high ) / 2;
        ans = equ(mid);
        if ( ans < precision && ans > (-precision))
        {
            return mid;
        }
        if (ans > -precision)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
}
 
int main()
{
    ld n,h,r,sl;
    ld l,m,height;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>r>>h;
        l = sqrt(r*r + h*h);
        m = 1.0/(h*h);
        A = r*m;
        B = 3*m*l;
        C = (-6)*l;
        height = binarysearch();
        if ( height > h)
            cout<<fixed<<setprecision(6)<<h<<endl;
        else
            cout<<fixed<<setprecision(6)<<height<<endl;
    }
    return 0;
} 
