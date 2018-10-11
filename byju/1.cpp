#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
unsigned long long int sum = 0,k,ans,tsum;
for(int i=0;i<n;i++)
{cin>>a[i]; sum+=a[i];}
int q;
cin>>q;
while(q--)
{
cin>>k;
if(k > sum)
{
cout<<-1<<endl;continue;
}
ans = floor(k/n);
tsum = 0;
while(1)
{
tsum = 0;
for(int i=0;i<n;i++)
{
if(a[i] > ans )
	tsum+=ans;
else
	tsum+=a[i];
}
if(tsum >= k)
{
cout<<ans<<endl;break;
}
++ans;
}

}

}
