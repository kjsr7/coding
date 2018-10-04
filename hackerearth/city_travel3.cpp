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
    vector <pair<int,int> > v;vector<int,int> v2;
    ull t,y;
    if(n!=0)
    {
    for(ull i=0;i<n;i++)
    {
        cin>>t>>y;
        v.push_back(make_pair(t,y));
	v2.push_back(t);
        m[t]=y;
    }
        sort(v.begin(),v.end(),fun);
//	sort(v2.begin(),v2.end());
    }
	ull is = 0;
    for(int i=0;i<n;i++)
    {
	 if(i == 0)
	 {
	is = v[i].second - x;
	v[i].second = is;
	 }
	 else
	 {
	v[i].second = is + v[i].second - x;
	 }
    }
    for(int i=0;i<n;i++)
	    cout<<v[i].first<<" "<<v[i].second<<endl;
	ull sum = 0;
    ull d = floor(s/x)+1;
    sum = d*x;
    ull isum = 0;
    int count = 0;
 //   ull p = 1ower_bound(v2.begin(),v2.end(),d) - v2.begin();


}
