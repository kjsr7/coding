#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
double m,l,A;
cin>>n>>m>>l>>A;
double a[n][2];
for(int i=0;i<n;i++)
{
cin>>a[i][0]>>a[i][1];
}
int ind=0;
double curx = 0,reqh,reqx;
double lax,uax,yda;
while(ind<n)
{

reqh = a[ind][1];reqx = a[ind][0];
if(curx > a[ind][0])
        break;
lax = (A*reqx - m)/A;
uax = (A*reqx - reqh)/A;
//cout<<lax<<" "<<uax<<endl;
if(lax > uax)
        break;
//cout<<uax<<endl;
if(uax < curx)
break;

//yda = lax - curx;
yda = uax - curx;
curx+=2*yda;
++ind;
}
if(ind == n)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;


}


