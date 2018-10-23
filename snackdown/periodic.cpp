#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,max;
cin>>t;
int f = 0;
while(t--)
{max = INT_MIN;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
for(int i=0;i<n;i++)
{
	if(a[i+1]!=-1 && a[i]!=-1 )
	{
	
		if(a[i+1] == 1)
		{
			if(a[i]!=-1)
			{
			if(max == INT_MIN)
			{
				max = a[i];
			}
			else
			{
			if(a[i]!=max)
			{
				f = 1;break;
			}
			}		
			}
		}
		else
		{
		
		}
	
}
if(f)
	cout<<"impossible"<<endl;
else
	cout<<"inf"<<endl;

}
}
