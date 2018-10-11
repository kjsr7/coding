#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
for(int i=2;i<=sqrt(n);i++)
{
if(n %i == 0)
	return false;
}
return true;
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
int min = a[0];
int max = min;
for(int i=1;i<n;i++)
{
if(a[i] > max) max = a[i];
if(a[i] <  min) min = a[i];
}
int one,two;
one = min*10+ max;two = max*10 + min;
cout<<one<<" "<<two<<endl;
cout<<isprime(one)<<" "<<isprime(two)<<endl;

}
