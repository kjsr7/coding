#include<bits/stdc++.h>
using namespace std;
#define ull int
map< ull,int> m,m2;
ull x,n,s;
ull ty[1001][2];
ull fun(ull s)
{
    static int d = 0;
    ++d;
    if(s<=0)
    return 0;
    else
    {
        if(n!=0 && m[d] == 1)
        {
            return 1 + fun(s - ty[m2[d]][1]);
            
        }
        else
        return 1 + fun(s - x);
        
        
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    scanf("%d",&s);scanf("%d",&x);scanf("%d",&n);
    
    //cin>>s>>x>>n
    if(n!=0)
    {
    for(ull i=0;i<n;i++)
    {
        //cin>>ty[i][0]>>ty[i][1];
        scanf("%d",&ty[i][0]);scanf("%d",&ty[i][1]);
        m[ty[i][0]] = 1;
        m2[ty[i][0]] = i;
        
    }}
    printf("%d",fun(s));
   return 0;
}
