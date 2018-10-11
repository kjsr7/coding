#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"enter the string "<<endl;
string s;
cin>>s;
map <char, int> m;
int max = INT_MIN;
for(int i=0;i<s.length();i++)
{
++m[s[i]];
if(m[s[i]] > max)
{
max = m[s[i]];
}
}
int cur = m[s[0]];
int count  =0;
for(int i=1;i<s.length();i++)
{
if(cur == m[s[i]])
{
++count;
}
}
if(count == s.length()-1)
{
cout<<"YES"<<endl;exit(0);
}
else
{
cout<<max<<endl;
count = 0;
for(char c='a';c<='z';c++)
{
if(m[c] == max)
{
++count;
}
}
cout<<endl;
cout<<count<<endl;
if(count == 1) 
{
cout<<"YES"<<endl;exit(0);
}

}
cout<<"NO"<<endl;
}
