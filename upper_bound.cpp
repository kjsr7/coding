#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[] = {10,20,27,31,35,40,50};
cout<<a[lower_bound(a,a+5,30)-a]<<endl;

}
