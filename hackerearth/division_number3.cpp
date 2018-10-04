#include<bits/stdc+#include<bits/stdc++.h>
using namespace std;
int n2,n;
int fun1(int a[])
{
int f = 0;int max = INT_MIN;
for(int i=0;i<n2;i++)
{
if(4*a[i] == n)
{
f  =1;if(pow(a[i],4) > max)
        max  = pow(a[i],4);
}
}

return max;
}

int fun2(int a[])
{
int f = 0;
int max = INT_MIN;
for(int i=0;i<n2;i++)
{
for(int j =0;j<n2;j++)
{
for(int k=0;k<n2;k++)
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
int fun3(int a[])
{
int f = 0;
int max  = INT_MIN;
for(int i=0;i<n2;i++)
{
for(int j=0;j<n2;j++)
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
int fun42(int a[])
{
int ind,ind2,n3;
int b[100],c[100],m = INT_MIN;
int l,h,sum;
for(int i=0;i<n2;i++)
{
        ind = -1;
        for(int j=i;j<n2;j++)
        {
        b[++ind] = a[i]+a[j]; c[ind] = a[i] * a[j];
                                                                                                                                                      71,1          28%
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
int t;
cin>>t;
int a[100];
int ind = -1;
int max = 0;
while(t--)
{
max = INT_MIN;
cin>>n;ind = -1;
for(int i=1;i<=n;i++)
{
if(n%i == 0)
{
        a[++ind] = i;
}
                                                                                                                                                      111,1         64%
}
n2 = ind+1;
if(n2==1 || n2==2)
{
cout<<-1<<endl;continue;
}
else
{
int max1 = fun1(a);
if(max1 > max)
        max = max1;

int max3 = fun3(a);
if(max3 > max)
        max = max3;
int max2  =fun2(a);
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
                                                                                                                                                      151,0-1       Bot
+
