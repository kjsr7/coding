#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
if(n == 0 || n == 1)
	cout<<n<<" ";
else
{
fun(n/2);
cout<<n%2<<" ";
}

}
int main()
{
int n;
cin>>n;
fun(n);
}
