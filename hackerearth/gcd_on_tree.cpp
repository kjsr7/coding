#include<bits/stdc++.h>
using namespace std;
map<int,int> ans;
map<pair<int,int>,int> g;
void display(stack <int> s,int i,int j,int a[])
{
	stack<int> t= s;
	t.pop();int cur;
	while(!t.size()!=1)
	{
		//cout<<t.size()<<endl;
		if(t.size() == 1)
		break;
		cur = t.top();
	//	cout<<cur<<" ";
		if(g[{i,j}] == 0)
		{
			g[{i,j}] = __gcd(a[i],a[j]);
		}
	/*	if(i == 1 && j == 5 && cur == 2)
		{
			cout<<g[{i,j}]<<endl;
		}*/
		ans[cur] = max(ans[cur],g[{i,j}]);
		
		t.pop();
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	map < pair<int,int>, int> m;
	pair <int,int> p;
	int l,r;
	
	for(int i=0;i<n-1;i++)
	{
		cin>>l>>r;
		m[{l,r}] = 1;m[{r,l}] = 1;
	}
	stack<int> s;
	map<int,int> v;
	
	for(int i=1;i<=n;i++)
	{
	for(int j=i+1;j<=n;j++)
	{
	if(m[{i,j}] !=1)
	{
	
	v[i] = 1;s.push(i);
	int cur,k;
	while(!s.empty() && s.top()!=j)
	{
		cur = s.top();
		for(k=1;k<=n;k++)
		{
			if(v[k] == 0 && m[{cur,k}] == 1)
			{
			v[k] = 1; break;		
			}
		}
		if(k<=n)
		{
			s.push(k);
		}
		else
		s.pop();
		//display(s);
		//cout<<endl;
	}
	//cout<<i<<" "<<j<<" ";
	display(s,i,j,a);//cout<<	endl; 
	while(!s.empty())
	s.pop();
	; v.clear();
}
}

	
}
//cout<<endl;
for(int i=1;i<=n;i++)
cout<<ans[i]<<" ";
}
