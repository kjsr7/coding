#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
sort(a,a+n);
int x;
cin>>x;int req;int l,h;
int count  = 0;
for(int i=0;i<n-2;i++)
{
req = x/a[i];
l = i+1;
h = n-1;
while(l<=h)
{
if(a[l] * a[h] == req)
{
++count;
}
if(a[l] * a[h] > req)
--h;
else
++l;

}
}
cout<<count<<endl;
}
