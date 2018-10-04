#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int o=0,z=0;
int ind = 0;
while(n!=0)
{
if(n%2 == 1) ++o;
else
	++z;
cout<<n%2<<" ";
	n/=2;
}
//++z;
//ut<<o<<" "<<z<<endl;
//cout<<(o ^ z)<<endl;

}
