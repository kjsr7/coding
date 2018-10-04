#include<bits/stdc++.h>
using namespace std;
#define ull int
map< ull,int> m,m2;
ull x,n,s;
ull ty[1001][2];
 ull fun(pair<int,int> a,pair<int,int> b)
{
    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    scanf("%d",&s);scanf("%d",&x);scanf("%d",&n);
    vector <pair<int,int> > v;
    ull t,y;
    if(n!=0)
    {
    for(ull i=0;i<n;i++)
    {
        //cin>>ty[i][0]>>ty[i][1];
        //scanf("%d",&ty[i][0]);scanf("%d",&ty[i][1]);
        cin>>t>>y;
        v.push_back(make_pair(t,y));
    }
        sort(v.begin(),v.end(),fun);
    }

    ull sum = 0;
    cout<<s<<" "<<x<<endl;
    ull d = floor(s/x)+1;
    sum = d*x;
    ull isum = 0;
    int count = 0;
    for(ull i=0;i<n;i++)
    {
        if(v[i].first <= d)
        {
            isum += v[i].second;++count;
            m[v[i].first] = v[i].second;
        }
        else
        break;
    }
    sum -= count*x;
    sum += isum;
    cout<<d<<" "<<isum<<" "<<sum<<endl;
    ull ts;
    if(sum == s)
    {
	cout<<d<<endl;
    }
    else if(sum > s)
    {
	while(1)
	{
	if(m[d] !=0)
		ts=m[d];
	else
		ts = x;
	if(sum - ts < s)
		break;
	else
		--d;

	}
	cout<<d<<endl;
    }
    else
    {
	cout<<d<<endl;

    }
  
   return 0;
}

