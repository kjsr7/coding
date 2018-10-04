#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[] = {10,20,30,40,1,2};
int x = 91;
//sort(a,a+6);
int ind = -1;
int b[100];
for(int i=0;i<6;i++)
{
for(int j=i+1;j<6;j++)
{
b[++ind] = a[i] + a[j];
}
}
int n = ind+1;
sort(b,b+n);
int l = 0,h = n-1;
int f = 0;
while(l<=h)
{
if(b[l] + b[h] == x)
{f = 1;break;

}
if(b[l] + b[h] > x) --h;
else
++l;
}
if(f == 1)
	cout<<"found"<<endl;
	else
	cout<<"not found"<<endl;

}
