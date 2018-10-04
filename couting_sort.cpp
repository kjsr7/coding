#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int h[10];
memset(h,0,sizeof(h));
int a[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++)
	cin>>a[i];
for(int i=0;i<n;i++)
{
++h[a[i]];
}
for(int i=1;i<10;i++)
{
h[i] += h[i-1];
}
cout<<"the count of each element is "<<endl;
for(int i=0;i<10;i++)
cout<<h[i]<<" ";
cout<<endl;
int s[n];
memset(s,-1,sizeof(-1));
for(int i=0;i<n;i++)
{
s[h[a[i]]]  = a[i];
--h[a[i]];
}
for(int i=0;i<n;i++)
if(s[i]!=-1)
cout<<s[i]<<" ";
}
