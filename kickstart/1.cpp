#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
int main()
{
ios_base::sync_with_stdio(false); cin.tie(NULL);
ull t;
cin>>t;
ull n;
ull a[7000];
ull c;
ull ct = t;
while(t--)
{
c = 0;
cin>>n;
for(ull i=0;i<n;i++)
	cin>>a[i];
for(ull i=0;i<n;i++)
{
for(ull j=i+1;j<n;j++)
{
for(ull k=j+1;k<n;k++)
{
if((a[i] * a[j] == a[k]) || (a[j] * a[k] == a[i]) || (a[i]*a[k] == a[j]))
	++c;
}
}
}
cout<<"Case #"<<ct-t<<": "<<c<<endl;
}


}
