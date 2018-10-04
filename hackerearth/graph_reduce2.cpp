#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
	int a[100],ind=-1,n2,m;
	int n;
    while(t--)
    {
	    ind = -1;
	cin>>n;
	for(int i=1;i<n;i++)
	{
	if(n%i == 0)
	{
	a[++ind] = i;
	}
	}
	int b = 0;
	n2 = ind+1;m = INT_MIN;int f=  0;
	for(int i=0;i<n2;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n2;i++)
	{
	for(int j=0;j<n2;j++)
	{
	for(int k=0;k<n2;k++)
	{
	for(int l=0;l<n2;l++)
	{
	if(a[i]+ a[j]+ a[k]+a[l] == n)
	{
	cout<<a[i]+ a[j]+ a[k]+a[l]<<endl;
	f = 1;
	if(a[i] * a[j] * a[k] * a[l] > m)
		m = a[i] * a[j] * a[k] * a[l];
	}
	if(a[i]+ a[j]+ a[k]+a[l] > n)
	{
	b = 1;break;
	}
	}
	if(b) break;
	}
	 if(b) break;
	}
	 if(b) break;
	}

	if(!f)
		cout<<-1<<endl;
	else
		cout<<m<<endl;

    }
}
