#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long ull
ull n2,n;
ull fun1(ull a[])
{
ull f = 0;ull max = ULLONG_MIN;
for(ull i=0;i<n2;i++)
{
if(4*a[i] == n)
{
f  =1;if(pow(a[i],4) > max)
        max  = pow(a[i],4);
}
}

return max;
}

ull fun2(ull a[])
{
ull f = 0;
ull max = ULLONG_MIN;
for(ull i=0;i<n2;i++)
{
for(ull j =0;j<n2;j++)
{
for(ull k=0;k<n2;k++)
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
ull fun3(ull a[])
{
ull f = 0;
ull max  = ULLONG_MIN;
for(ull i=0;i<n2;i++)
{
for(ull j=0;j<n2;j++)
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
ull fun42(ull a[])
{
ull ind,ind2,n3;
ull b[100],c[100],m = ULLONG_MIN;
ull l,h,sum;
for(ull i=0;i<n2;i++)
{
        ind = -1;
        for(ull j=i;j<n2;j++)
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

int main()
{
ull t;
cin>>t;
ull a[100];
ull ind = -1;
ull max = 0;
while(t--)
{
max = ULLONG_MIN;
cin>>n;ind = -1;
for(ull i=1;i<=n;i++)
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
ull max1 = fun1(a);
if(max1 > max)
        max = max1;

ull max3 = fun3(a);
if(max3 > max)
        max = max3;
ull max2  =fun2(a);
if(max2 > max)
        max = max2;
if(n > 3)
{
if(fun42(a) > max)
        max = fun42(a);
}


if(max !=ULLONG_MIN)
        cout<<max<<endl;
        else
{
cout<<-1<<endl;continue;
}




}
}
}
                                                                                                                                                     

