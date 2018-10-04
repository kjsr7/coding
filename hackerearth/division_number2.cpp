#include<bits/stdc++.h>
using namespace std;
 n2,n;
 fun1(ull a[])
{
 f = 0;ull max = INT_MIN;
for( i=0;i<n2;i++)
{
if(4*a[i] == n)
{
f  =1;if(pow(a[i],4) > max)
	max  = pow(a[i],4);
}
}

return max;
}

 fun2(ull a[])
{
 f = 0;
 max = INT_MIN;
for( i=0;i<n2;i++)
{
for( j =0;j<n2;j++)
{
for( k=0;k<n2;k++)
{
if(i!=j && j!=k)
if(2*a[i] + a[j] + a[k] == n)
{f= 1;
if(pow(a[i],2) * a[j] * a[k] > max)
	max = pow(a[i],2) * a[j] * a[k];
}
}


}
}

return max;
}
int fun3(ull a[])
{
 f = 0;
 max  = INT_MIN;
for( i=0;i<n2;i++)
{
for( j=0;j<n2;j++)
{
if(i!=j)
if(3*a[i] + a[j]  == n)
{
	f = 1;
	if(pow(a[i],3) * a[j] > max)
		max = pow(a[i],3) * a[j];
}
}
}
return max;
}
int fun42(ull a[])
{
 ind,ind2,n3;
 b[100],c[100],m = INT_MIN;
 l,h,sum;
/*cout<<n<<" "<<n2<<" "<<endl;
for( i=0;i<n2;i++)
	cout<<a[i]<<" ";
cout<<endl;*/
for( i=0;i<n2;i++)
{
	ind = -1;
	for( j=i;j<n2;j++)
	{
	b[++ind] = a[i]+a[j]; c[ind] = a[i] * a[j];
	}
	
	n3 = ind+1;
 l = 0; h = n3-1;
	while(l<=h)
	{
		 sum = b[l]+b[h];
            if(sum == n)
            {
                if(c[l] * c[h] > m)
                m = c[l] * c[h];++l;
            }

            else if(sum < n)++l;
            else --h;	
	}

	ind = -1;

}
return m;
}
        	
 main()
{
 t;
cin>>t;
 a[100];
 ind = -1;
 max = 0;
while(t--)
{
max = INT_MIN;
cin>>n;ind = -1;
for( i=1;i<=n;i++)
{
if(n%i == 0)
{
	a[++ind] = i;
}

}
n2 = ind+1;
if(n2==1 || n2==2)
{
cout<<-1<<endl;continue;
}
else
{
 max1 = fun1(a);
if(max1 > max)
	max = max1;

 max3 = fun3(a);
if(max3 > max)
	max = max3;
 max2  =fun2(a);
if(max2 > max)
	max = max2;
if(n > 3)
{
if(fun42(a) > max)
	max = fun42(a);
}


if(max !=INT_MIN)
	cout<<max<<endl;
	else
{
cout<<-1<<endl;continue;
}




}
}
}
