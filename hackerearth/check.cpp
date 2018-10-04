#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
int main()
{
ull n;
int t;
cin>>t;

ull a[50];
ull ind,n2,n3,ind2,l,h,sum,m;
ull max2 = 35*18;
ull b[max2],c[max2];
while(t--)
{cin>>n;
if(n == 1)
{
cout<<1<<endl;continue;
}
if(n == 2)
{cout<<0<<endl;continue;}
if(n==3)
{
cout<<0<<endl;continue;}

ind = -1;
for(ull i=1;i<n;i++)
{
	if(n%i == 0)
	{
	a[++ind] = i;
	}
}
n2 = ind+1;
/*for(ull i=0;i<n2;i++)
cout<<a[i]<<" ";
cout<<endl;*/
max2 = n2*(n2+1)/2;
ind2  = -1;
for(ull i=0;i<n2;i++)
{
for(ull j=i;j<n2;j++)
{
b[++ind2] = a[i] + a[j];
c[ind2] = a[i] * a[j];
}
}
ull n3 = ind2+1;
for(ull i=0;i<n3;i++)
{
for(ull j=i+1;j<n3;j++)
{
if(b[j] < b[i])
{
ull t = b[j];
b[j] = b[i];
b[i] = t;
t = c[j];
c[j] = c[i];
c[i] = t;
}
}
}
/*
for(ull i=0;i<n3;i++)
{
cout<<b[i]<<" ";
}
cout<<endl;
for(ull i=0;i<n3;i++)
{
cout<<c[i]<<" ";
}
cout<<endl;
*/
l = 0;
h = n3-1;
sum = 0;
m = 0;
int f = 0;
while(l<=h)
{
sum = b[l] + b[h];
if(sum == n)
{
m = max(m,c[l]*c[h]);
//cout<<l<<" "<<h<<" "<<m<<endl;
f  =1;
++l;
}
else if(sum > n)
{
--h;
}
else
{
++l;
}
}
if(f)
cout<<m<<endl;
else
cout<<-1<<endl;

}}
