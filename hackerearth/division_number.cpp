#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    int a[1000];int ind = -1;
    int b[1000];
    int c[1000];
    int n2,n;
    int m;
    while(t--)
    {
        cin>>n;ind = -1;
        for(int i=1;i<n;i++)
        {
            if(n%i == 0)
            {
                a[++ind] = i;
            }
        }
        n2 = ind+1;
	m = INT_MIN;
	for(int i=0;i<n2;i++)
	{
	if(a[i]*4 == n)
	{
	if(pow(a[i],4) > m)
		m = pow(a[i],4);
	}

	}
/*        cout<<"a"<<endl;
        for(int i=0;i<n2;i++)
        cout<<a[i]<<" ";
        cout<<endl;*/
        ind = -1;
        for(int i=0;i<n2;i++)
        {
            for(int j=i+1;j<n2;j++)
            {
                b[++ind] = a[i] + a[j];
                c[ind] = a[i] * a[j];
            }
        }
       
        n2 = ind+1;
/*          cout<<"b"<<endl;
        for(int i=0;i<n2;i++)
        cout<<b[i]<<" ";
        cout<<endl;*
         cout<<"c"<<endl;
        for(int i=0;i<n2;i++)
        cout<<c[i]<<" ";
        cout<<endl;*/
        int l = 0,h = n2-1,sum,f=0;
        while(l<=h)
        {
//          cout<<l<<" "<<h<<endl;
            sum = b[l]+b[h];
            if(sum == n)
            {
                f=1;

//		cout<<"eq "<<l<<" "<<h<<endl;
                if(c[l] * c[h] > m)
                m = c[l] * c[h];++l;
            }
            
            else if(sum < n)++l;
            else --h;
        }
        if(f == 0)
        cout<<-1<<endl;
        else
        cout<<m<<endl;
        
    }
   
   
   return 0;
}
