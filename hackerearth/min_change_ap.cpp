#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
int d[n-1];
for(int i=1;i<n;i++)
	d[i-1] = a[i] - a[i-1];

map<int,int> m;
for(int i=0;i<n-1;i++)
{
m[d[i]] = m[d[i]] + 1;
int t = m[d[i]];
if(t > max)
	max = t;
}
cout<<n-max<<endl;


}
