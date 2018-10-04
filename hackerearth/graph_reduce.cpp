#include<bits/stdc++.h>
#define INF 999999
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,c,k;
    cin>>n>>m>>c>>k;
    int a[m][3];
    int g[n][n];
    //memset(g,0,INT_MAX);
    for(int i=0;i<n;i++)
    {
	for(int j=0;j<n;j++)
	{
	g[i][j] = INF;

	}
	g[i][i] = 0;
    }
  /*  for(int i=0;i<n;i++)
    {
	for(int j=0;j<n;j++)
		cout<<g[i][j]<<" ";
	cout<<endl;
    }*/
    for(int i=0;i<m;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        g[a[i][0]-1][a[i][1]-1] = a[i][2];
        g[a[i][1]-1][a[i][0]-1] = a[i][2];
        
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<g[i][j]<<" ";
        cout<<endl;
    }
    for(int k=0;k<n;k++)
    {
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
	if(g[i][k] + g[k][j] < g[i][j])
	{
	g[i][j] = g[i][k] + g[k][j];
	g[j][i]  = g[i][j];
	}	

	
	}}
    }

    for(int i=0;i<n;i++)
    {
	for(int j=i+1;j<n;j++)
	{
	cout<<g[i][j]<<" ";
	}
    }

}
