    #include<bits/stdc++.h>
    using namespace std;
    #define ull long long int 
    ull n;
    int fun(pair<int,int> a,pair<int,int> b)
    {
    return a.first < b.first;
    }
    int main()
    {
    int x;
    double s;
    cin>>s>>x>>n;
    vector<pair<int,int> > v;
    vector<int>v2;int t,y;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
    cin>>t>>y;
    v.push_back(make_pair(t,y));
    	v2.push_back(t);
    	m[t] = y;
    }
    sort(v.begin(),v.end(),fun);
    ull sum = 0;
    ull ind = -1;
    ull curd = 0;
    ull d = 0;
    ull f = 0;
    while(ind<n-1)
    {
    ++curd;
    sum += (v[++ind].first - curd)*x;
    d+= v[ind].first - curd;

    //cout<<d<<" "<<sum<<endl;
    if(sum > s)
    break;
    sum += v[ind].second;
    ++d;
    curd = v[ind].first;
    if(sum > s)
    {f = 1;
    	break;}
    //cout<<d<<" "<<sum<<endl;
    }
    if(ind!=n-1)
    {
    if(f == 1)
    cout<<d<<endl;
    else
    {
        while(sum > s)
        { sum-=x;
            if(sum < s)
                    break;
            --d;
    
        }
        
        cout<<(d)<<endl;
    }
    }
    else
    {
	 //   cout<<"jai"<<endl;
        double diff = s - sum;
        ull id = ceil(diff/x);
        cout<<(d + id)<<endl;
        
    }
    }


