#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     int n;
     unsigned long long int ans;
     for(n=1;n<=50;n++)
     {
         if(n%2 == 0)
         {
             int cn = n/2;
	     ans  = pow(3,cn-1);
         }
         else
         {
             int cn = (n+1)/2;

	     ans  = pow(2,cn-1);
         }

	     cout<<ans<<endl;
     }
         
     
	
	return 0;
}
